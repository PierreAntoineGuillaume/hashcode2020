//
// Created by pierreantoine on 21/02/2020.
//

#include "library_set.h"


library_set::library_set(unsigned long expect)
{
    catalog.reserve(expect);
}
void library_set::add(unsigned int book_count, unsigned int registration_duration, unsigned int books_per_day)
{
    catalog.emplace_back(library{book_count, registration_duration, books_per_day, {}, 0, 0.f});
    catalog[catalog.size() - 1].book_references.reserve(book_count);
}
library & library_set::operator[](unsigned int index)
{
    return catalog[index];
}

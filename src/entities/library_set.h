//
// Created by pierreantoine on 21/02/2020.
//


#pragma once


#include <vector>
#include "library.h"


class library_set
{
private:
    std::vector<library> catalog;
public:
    explicit library_set(unsigned long expect);
};

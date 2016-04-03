//
//  algorithm.cpp
//  algorithms
//
//  Created by Evgeniy Shumakov on 31.03.16.
//  Copyright © 2016 Evgeniy Shumakov. All rights reserved.
//

#include <stdio.h>
#include "algoritms.h"
#include <algorithm>

bool contains(std::string& message, char symbol)
{
    if(std::find(message.begin(),message.end(),symbol)==message.end())
        return false;
    else
        return true;
}

unsigned long getPos(std::string& message, char symbol)
{
    return message.find(symbol);
}

std::vector<std::string> &ParseStringToVector(const std::string &message, char delim,std::vector<std::string> &elems)
{
    std::stringstream ss(message);
    std::string item;
    while(std::getline(ss,item,delim))
    {
        elems.push_back(item);
    }
    return elems;
}


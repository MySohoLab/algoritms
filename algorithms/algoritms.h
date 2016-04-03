//
//  algoritms.h
//  algorithms
//
//  Created by Evgeniy Shumakov on 22.02.16.
//  Copyright © 2016 Evgeniy Shumakov. All rights reserved.
//
#include <string>
#include <vector>
#ifndef algoritms_h
#define algoritms_h

/*
/ Function of bubble sorting
/ Input: array of integers
/ Output: sorted array of integers
*/
using namespace std;
///
// Function to check contains symbol in string
// return true or false
///
bool contains(std::string& message, char& symbol);

///
// Function to find position of symbol in string
// return int number of first founded symbol's position
///
unsigned long getPos(std::string& message, char symbol);

///
// Function to parse from string with char delimitor
// into vector of strings return vector<string>
///
vector<string> ParseStringToVector(char delim,std::string &message);

///
// Function to parse from string with string delimitor
// into vector of strings return vector<string>
///
vector<string> ParseStringToVector(string& delim,string &message);

#endif /* algoritms_h */

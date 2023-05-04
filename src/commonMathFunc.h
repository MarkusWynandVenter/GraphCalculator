#ifndef COMMON_MATH_FUNC_H
#define COMMON_MATH_FUNC_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

//This class contains common math functions that are used in multiple classes

class commonMathFunc
{
public:
    commonMathFunc();
    ~commonMathFunc();
    static string removeSpaces(string parEquation);
    static string removeParenthesis(string parEquation);
    static int findMultiplyNum(string partOfEquation);
    static string multiplyNums(string parEquation, int multiplyNum);
};

#endif
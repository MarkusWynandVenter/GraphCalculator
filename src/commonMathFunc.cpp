#include "commonMathFunc.h"

commonMathFunc::commonMathFunc()
{
}

commonMathFunc::~commonMathFunc()
{
}

string commonMathFunc::removeSpaces(string parEquation)
{
    //removes all spaces from the equation
    for(int i = 0; i < parEquation.length(); i++)
    {
        if(parEquation[i] == ' ')
        {
            parEquation.erase(i, 1);
        }
    }
    return parEquation;
}

string commonMathFunc::removeParenthesis(string parEquation)
{
    int multiplyNum = 0;
    int parenthesisStart = 0;
    int parenthesisEnd = 0;
    int parenthesisLength = 0;
    string parenthesisString = "";
    string newParenthesisString = "";
    bool parenthesisFound = false;

    //Expand the parenthesis for the part of the equation
    for(int i = 0; i < parEquation.length(); i++)
    {
        if(parEquation[i] == '(')
        {
            multiplyNum = findMultiplyNum(parEquation.substr(0, i));
            parenthesisStart = i;
            parenthesisFound = true;
        }
        else if(parenthesisFound){
            parenthesisLength++;
        }

        if(parEquation[i] == ')')
        {
            parenthesisEnd = i;
            parenthesisFound = false;
            parenthesisString = parEquation.substr(parenthesisStart + 1, parenthesisLength - 1);
            newParenthesisString = multiplyNums(parenthesisString, multiplyNum);
        }
    }

    return "";
}

int commonMathFunc::findMultiplyNum(string partOfEquation)
{
    int multiplyNum = 0;
    int multiplyNumLength = 0;
    int multiplyNumStart;
    string multiplyString = "";

    //Finds the number before the parenthesis
    for(int i = 0; i < partOfEquation.length(); i++){
        if(isdigit(partOfEquation[i])){
            multiplyNumLength++;
        }
        else{
            multiplyNumLength = 0;
        }
    }

    if(multiplyNumLength == 0){
        multiplyNum = 1;
        return multiplyNum;
    }
    else{
        multiplyNumStart = partOfEquation.length() - multiplyNumLength;
        multiplyString = partOfEquation.substr(multiplyNumStart, multiplyNumLength);
        multiplyNum = stoi(multiplyString);
        return multiplyNum;
    }

    
}

string commonMathFunc::multiplyNums(string parEquation, int multiplyNum)
{
    int theNumLength = 0;
    int theNumStart = 0;
    int theNum = 0;
    int theNumEnd = 0;
    string theNumString = "";
    string newEquation = "";

    //Multiplies the numbers in the parenthesis by the number before the parenthesis
    for(int i = 0; i< parEquation.length(); i++)
    {
        if(isdigit(parEquation[i]))
        {
            theNumLength++;
        }
        else if(theNumLength > 0)
        {
            theNumStart = i - theNumLength;
            theNumEnd = i;
            theNumString = parEquation.substr(theNumStart, theNumLength);
            theNum = stoi(theNumString);
            theNum *= multiplyNum;
            theNumLength = 0;

            //Converts the number back to a string and adds it to the new equation
            theNumString = to_string(theNum);
            newEquation += theNumString;
        }
        else
        {
            theNumLength = 0;
            newEquation += parEquation[i];
        }
    }

    cout << newEquation << endl;

    return newEquation;
}
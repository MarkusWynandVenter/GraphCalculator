#include "toString.h"

ToString::ToString(string parString)
{
    if(parString == "")
    {
        theString = "No string set";
    }
    else
    {
        theString = parString;
    }
}

ToString::~ToString()
{
}

string ToString::getToString()
{
    return theString;
}

void ToString::setToString(string parString)
{
    theString = parString;
}

void ToString::output()
{
    cout << theString << endl;
}
#include "toString.h"

ToString::ToString(string parString)
{
    //Sets the string to be outputed
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
    //Retuens the current output string
    return theString;
}

void ToString::setToString(string parString)
{
    //Sets the output string to the string passed in as a parameter
    theString = parString;
}

void ToString::output()
{
    //Outputs the string
    cout << theString << endl;
}
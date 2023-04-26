#include "toString.h"

ToString::ToString(string toString)
{
    if(toString == "")
    {
        this->toString = "No string set";
    }
    else
    {
        this->toString = toString;
    }
    this->toString = toString;
}

ToString::~ToString()
{
}

string ToString::getToString()
{
    return this->toString;
}

void ToString::setToString(string toString)
{
    this->toString = toString;
}

void ToString::output()
{
    cout << this->toString << endl;
}
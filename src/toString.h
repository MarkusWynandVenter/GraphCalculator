#ifndef TO_STRING_H
#define TO_STRING_H

#include <string>
#include <iostream>

using namespace std;

class ToString
{
    private:
        string toString;
    public:
        ToString(string toString);
        ~ToString();
        string getToString();
        void setToString(string toString);
        void output();
        
};

#endif
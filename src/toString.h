#ifndef TO_STRING_H
#define TO_STRING_H

#include <string>
#include <iostream>

using namespace std;

class ToString
{
    private:
        string theString;
    public:
        ToString(string parString);
        ~ToString();
        string getToString();
        void setToString(string parString);
        void output();
        
};

#endif
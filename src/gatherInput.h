#ifndef GAHTERINPUT_H
#define GAHTERINPUT_H

#include <iostream>
#include <string>

using namespace std;

class gatherInput
{
    private:
        string equation;
        string equationType;
        string input;
    
    public:
        gatherInput();
        ~gatherInput();
        void setEquation();
        void setEquationType();
        string getEquation();
        string getEquationType();
        string getInput();
};

#endif
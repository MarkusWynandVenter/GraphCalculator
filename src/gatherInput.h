#ifndef GAHTERINPUT_H
#define GAHTERINPUT_H

//The class for gathering input from the user
//This class also seperates the equation from the equation type from the input

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
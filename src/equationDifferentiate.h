#ifndef EQUALTION_DIFFERENTIATE_H
#define EQUALTION_DIFFERENTIATE_H

#include <vector>
#include <string>
#include "equationSolver.h"

using namespace std;

class EquationDifferentiate : public EquationSolver
{
    private:
        string solvedEquation;
        string equation;
        vector<string> equationSteps;
        ToString* outputString;

    public:
        EquationDifferentiate();
        ~EquationDifferentiate();
        void setEquation(string equation);
        string getEquation();
        string getSolvedEquation();
        string getEquationSteps();
        void solveEquation();
        
};

#endif
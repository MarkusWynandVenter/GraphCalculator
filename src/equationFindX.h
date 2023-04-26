#ifndef EQUALTION_FIND_X_H
#define EQUALTION_FIND_X_H

#include <vector>
#include <string>
#include "equationSolver.h"

using namespace std;

class EquationFindX : public EquationSolver
{
    private:
        string solvedEquation;
        string equation;
        vector<string> equationSteps;

    public:
        EquationFindX();
        ~EquationFindX();
        void setEquation(string equation);
        string getEquation();
        string getSolvedEquation();
        string getEquationSteps();
        void solveEquation();
        
};

#endif
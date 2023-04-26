#ifndef EQUAION_SOLVER_H
#define EQUAION_SOLVER_H

#include <vector>
#include <string>
#include "toString.h"

using namespace std;

class EquationSolver
{
    private:
        string solvedEquation;
        string equation;
        vector<string> equationSteps;
        ToString* outputString;

    public:
        EquationSolver();
        ~EquationSolver();
        void setEquation(string equation);
        string getEquation();
        string getSolvedEquation();
        string getEquationSteps();
        virtual void solveEquation() = 0;
        
};

#endif
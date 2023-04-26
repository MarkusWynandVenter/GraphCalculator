#ifndef EQUALTION_SIMPLIFY_H
#define EQUALTION_SIMPLIFY_H

#include <vector>
#include <string>
#include "equationSolver.h"

using namespace std;

class EquationSimplify : public EquationSolver
{
    private:
        string solvedEquation;
        string equation;
        vector<string> equationSteps;

    public:
        EquationSimplify();
        ~EquationSimplify();
        void setEquation(string equation);
        string getEquation();
        string getSolvedEquation();
        string getEquationSteps();
        void solveEquation();
        
};

#endif
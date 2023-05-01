#ifndef EQUATION_CONTEXT_H
#define EQUATION_CONTEXT_H

#include <vector>
#include <string>
#include <memory>
#include "equationSolver.h"
#include <iostream>

using namespace std;

class EquationContext
{
    private:
        unique_ptr<EquationSolver> equationSolver;
    public:
        void setSolver(unique_ptr<EquationSolver> equationSolver);
        void solveEquation();
        
};

#endif
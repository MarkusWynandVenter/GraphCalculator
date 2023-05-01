#ifndef EQUATION_CONTEXT_H
#define EQUATION_CONTEXT_H

//The context class for the equation solver strategy Pattern
//This class is responsible for setting the equation solver and calling the solveEquation method

#include <vector>
#include <string>
#include <memory>
#include "equationSolver.h"

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
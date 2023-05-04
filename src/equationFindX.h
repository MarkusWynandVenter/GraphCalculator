#ifndef EQUALTION_FIND_X_H
#define EQUALTION_FIND_X_H

//The class for solving for x using the equation solver strategy Pattern
//This class inherits from the EquationSolver class

#include <vector>
#include <string>
#include "equationSolver.h"
#include "commonMathFunc.h"
#include <iostream>

using namespace std;

class EquationFindX : public EquationSolver
{
    public:
        EquationFindX(string parEquation);
        ~EquationFindX();
        void solveEquation();
        
};

#endif
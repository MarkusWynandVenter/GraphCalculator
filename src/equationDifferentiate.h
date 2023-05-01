#ifndef EQUALTION_DIFFERENTIATE_H
#define EQUALTION_DIFFERENTIATE_H

//The class for differentiating equations using the equation solver strategy Pattern
//This class inherits from the EquationSolver class

#include <vector>
#include <string>
#include "equationSolver.h"

using namespace std;

class EquationDifferentiate : public EquationSolver
{
    private:


    public:
        EquationDifferentiate();
        ~EquationDifferentiate();
        void solveEquation();
        
};

#endif
#ifndef EQUALTION_SIMPLIFY_H
#define EQUALTION_SIMPLIFY_H

//The class for simplifying equations using the equation solver strategy Pattern
//This class inherits from the EquationSolver class

#include <vector>
#include <string>
#include "equationSolver.h"

using namespace std;

class EquationSimplify : public EquationSolver
{
    public:
        EquationSimplify(string parEquation);
        ~EquationSimplify();
        void solveEquation();
        
};

#endif
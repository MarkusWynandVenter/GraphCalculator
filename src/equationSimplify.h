#ifndef EQUALTION_SIMPLIFY_H
#define EQUALTION_SIMPLIFY_H

#include <vector>
#include <string>
#include "equationSolver.h"

using namespace std;

class EquationSimplify : public EquationSolver
{
    public:
        EquationSimplify();
        ~EquationSimplify();
        void solveEquation();
        
};

#endif
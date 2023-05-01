#ifndef EQUALTION_FIND_X_H
#define EQUALTION_FIND_X_H

#include <vector>
#include <string>
#include "equationSolver.h"

using namespace std;

class EquationFindX : public EquationSolver
{
    public:
        EquationFindX();
        ~EquationFindX();
        void solveEquation();
        
};

#endif
#ifndef EQUALTION_DIFFERENTIATE_H
#define EQUALTION_DIFFERENTIATE_H

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
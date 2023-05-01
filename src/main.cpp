#include <iostream>
#include <string>
#include <memory>
#include "equationContext.h"
#include "equationSolver.h"
#include "equationDifferentiate.h"
#include "equationFindX.h"
#include "equationSimplify.h"
#include "gatherInput.h"


using namespace std;

int main () {
    bool programRunning = true;
    EquationContext equationContext;
    gatherInput* input;

    while(programRunning)
    {
        input = new gatherInput();

        if(input->getEquationType() == "Diff")
        {
            equationContext.setSolver(make_unique<EquationDifferentiate>());
            equationContext.solveEquation();
            delete input;
        }
        else if (input->getEquationType() == "Solve")
        {
            equationContext.setSolver(make_unique<EquationFindX>());
            equationContext.solveEquation();
            delete input;
        }
        else if (input->getEquationType() == "Simplify")
        {
            equationContext.setSolver(make_unique<EquationSimplify>());
            equationContext.solveEquation();
            delete input;
        }
        else
        {
            cout << "Invalid Input" << endl;
            delete input;
            exit(0);
        }
    }

    return 0;
}
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

        try {
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
            else if (input->getInput() == "Exit"){
                programRunning = false;
                cout << "Exiting Program" << endl;
                delete input;
                exit(0);
            }      
            else
            {
                throw "Invalid Input";
            }
        }

        catch(const char* msg)
        {
            cout << "Error: ";
            cout << msg << endl << endl;
            delete input;
        }
    }

    return 0;
}
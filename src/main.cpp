#include <iostream>
#include <string>
#include "equationContext.h"
#include "equationSolver.h"
#include "equationDifferentiate.h"
#include "equationFindX.h"
#include "equationSimplify.h"


using namespace std;

int main (int argc, char *argv[]) {

    EquationContext equationContext;

    equationContext.setSolver(make_unique<EquationDifferentiate>());
    equationContext.solveEquation();

    equationContext.setSolver(make_unique<EquationFindX>());
    equationContext.solveEquation();

    equationContext.setSolver(make_unique<EquationSimplify>());
    equationContext.solveEquation();

    return 0;
}
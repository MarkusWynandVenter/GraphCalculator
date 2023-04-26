#include <iostream>
#include <string>
#include "equationContext.h"
#include "equationSolver.h"
#include "equationDifferentiate.h"

using namespace std;

int main (int argc, char *argv[]) {

    EquationContext equationContext;

    equationContext.setSolver(make_unique<EquationDifferentiate>());
    equationContext.solveEquation();

    return 0;
}
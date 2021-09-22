#include <iostream>
#include "operation.h"


double OperationAdd::getResult()
{
    return getNumberA() + getNumberB();
}

double OperationSub::getResult()
{
    return getNumberA() - getNumberB();
}

double OperationMul::getResult()
{
    return getNumberA() * getNumberB();
}

double OperationDiv::getResult()
{
    double numB = getNumberB();
    if (numB == 0) {
        std::cout << "numB is zero" << std::endl;
        exit(0);
    }

    return getNumberA() / numB;
}


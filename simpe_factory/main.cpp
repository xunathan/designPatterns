#include <iostream>
#include "operationFactory.h"

using namespace std;

int main()
{
    double numA, numB;
    string operStr;
    cin >> numA >> numB >> operStr;
    
    Operation* oper = OperationFactory::createOperate(operStr);
    oper->setNumberA(numA);
    oper->setNumberB(numB);
    cout << oper->getResult() << endl;
}


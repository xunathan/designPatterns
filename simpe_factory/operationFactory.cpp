#include"operationFactory.h"
#include <map>
#include<string>
using namespace std;

map<string, int> operMap = {{"+", 0}, {"-", 1}, {"*", 2}, {"/", 3}};

Operation* OperationFactory::createOperate(std::string oper)
{
    switch(operMap[oper]) {
        case 0:
            return new OperationAdd();
        case 1:
            return new OperationSub();
        case 2:
            return new OperationMul();
        case 3:
            return new OperationDiv();
    }

    return nullptr;
}
#include<string>
#include"operation.h"

class OperationFactory
{
public:
    static Operation* createOperate(std::string oper);
};
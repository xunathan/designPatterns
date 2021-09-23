#pragma once

#include "cashStrategy.h"

class CashContext 
{
public:
    CashContext(int type);
    double getRusult(double money);

private:
    CashSuper* cs{ nullptr };
};
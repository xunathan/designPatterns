
#include"cashContext.h"

using namespace std;


CashContext::CashContext(int type)
{
    switch (type)
    {
        case 1:
            cs = new CashReturn("300", "100");
            break;
        case 2:
            cs = new CashRebate("0.8");
            break;
        default:
            cs = new CashNormal();
    }
}

double CashContext::getRusult(double money)
{
    return cs->acceptCash(money);
}
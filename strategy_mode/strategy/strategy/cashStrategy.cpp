#include"cashStrategy.h"


CashRebate::CashRebate(std::string moneyRebateStr)
{
    moneyRebate = std::stod(moneyRebateStr);
}

double CashRebate::acceptCash(double money)
{
    return money * moneyRebate;
}

CashReturn::CashReturn(std::string moneyCondStr, std::string moneyRet)
{
    moneyCond = std::stod(moneyCondStr);
    moneyReturn = std::stod(moneyRet);
}

double CashReturn::acceptCash(double money)
{
    double result = money;
    if (money >= moneyCond && moneyCond > 0) {
        result = money - money / moneyCond * moneyReturn;
    }

    return result;
}
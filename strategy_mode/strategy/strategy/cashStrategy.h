#pragma once

#include<string>

class CashSuper
{
public:
    virtual double acceptCash(double money) = 0;
};

class CashNormal : public CashSuper
{
    virtual double acceptCash(double money) { return money; };
};

class CashRebate : public CashSuper
{
public:
    CashRebate(std::string moneyRebateStr);
    //~CashRebate() {};
    virtual double acceptCash(double money);
private:
    double moneyRebate;
};

class CashReturn : public CashSuper
{
public:
    CashReturn(std::string moneyCondStr, std::string moneyRet);
    virtual double acceptCash(double money);
private:
    double moneyCond{0};
    double moneyReturn{ 0 };
};
class Operation
{
public:
    double getNumberA()    { return _numberA; }
    double getNumberB()    { return _numberB; }

    void setNumberA(double val) {_numberA = val; }
    void setNumberB(double val) {_numberB = val; }

    virtual double getResult()
    {
        double rst = 0;
        return rst;
    }

private:
    double _numberA{0};
    double _numberB{0};
};

class OperationAdd : public Operation
{
    double getResult();
};

class OperationSub : public Operation
{
    double getResult();
};

class OperationMul : public Operation
{
    double getResult();
};

class OperationDiv : public Operation
{
    double getResult();
};

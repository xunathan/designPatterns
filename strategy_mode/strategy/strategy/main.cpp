#include<iostream>
#include<map>
#include"cashContext.h"

using namespace std;
map<int, string> mapStr{ {0,"Normal"}, {1, "��300��100"}, {2, "8��"} };
int main()
{
    int type, money;
    cin >> money >> type;

    CashContext *csuper = new CashContext(type);

    cout << mapStr[type] << ":" << csuper->getRusult(money) << endl;

    
    return 0;
}


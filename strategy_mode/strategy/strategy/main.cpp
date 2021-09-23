#include<iostream>
#include<map>
#include"cashContext.h"

using namespace std;
map<int, string> mapStr{ {0,"Normal"}, {1, "Âú300¼õ100"}, {2, "8ÕÛ"} };
int main()
{
    int type, money;
    cin >> money >> type;

    CashContext *csuper = new CashContext(type);

    cout << mapStr[type] << ":" << csuper->getRusult(money) << endl;

    
    return 0;
}


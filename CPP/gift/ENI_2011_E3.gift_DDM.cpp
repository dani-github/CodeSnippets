#include <iostream>
using namespace std;
int main( )
{
    int n1, n2, n3;
    char L1, L2, L3;
    int sym2, sym4, sym6;
    char sym1, sym3, sym5;

    string input;

    cin >> input;

    L1 = input[0];
    L2 = input[1];
    L3 = input[2];
    n1 = (input[3]) - 48;
    n2 = (input[4]) - 48;
    n3 = (input[5]) - 48;



    /// CHARACTERSSS -----------------

    sym1 = L1;
    if(L2 < sym1) sym1 = L2;
    if(L3 < sym1) sym1 = L3;

    sym5 = L1;
    if(L2 > sym5) sym5 = L2;
    if(L3 > sym5) sym5 = L3;

    if(sym1!= L1 && sym5 != L1) sym3 = L1;
    if(sym1!= L2 && sym5 != L2) sym3 = L2;
    if(sym1!= L3 && sym5 != L3) sym3 = L3;

    /// NUMBERSSSSSS -----------------

    sym2 = n1;
    if(n2 < sym2) sym2 = n2;
    if(n3 < sym2) sym2 = n3;

    sym6 = n1;
    if(n2 > sym6) sym6 = n2;
    if(n3 > sym6) sym6 = n3;

    if(sym2!= n1 && sym6 != n1) sym4 = n1;
    if(sym2!= n2 && sym6 != n2) sym4 = n2;
    if(sym2!= n3 && sym6 != n3) sym4 = n3;

    /// -----------------------------------

    cout << sym1 << sym6 << sym3 << sym4 << sym5 << sym2 << endl;



    return 0;
}


#include <iostream>
using namespace std;
int main( )
{
    int a, b, c;
    int symnumber;
    cin >> a >> b >> c;

    if(a == b && b == c)
    {
        symnumber = a*100 + b*10 + c;
    }
    else if(b == c && a != b)
    {
        symnumber = a*1000 + b*100 + c*10 + a;
    }
    else
    {
        symnumber = a*10000 + b*1000 + c*100 + b*10 + a;
    }



    cout << symnumber;

    return 0;
}

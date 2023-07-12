#include<iostream>
using namespace std;
int main( )
{
    int a, b, c, d, minabc, maxabc, e, f, g, h;
    int sborab, sborcd;
    cin >> a >> b >> c >> d;

    ///--------------------------------
    if(a > b) sborab = (a - b) + 1;
    if(b > a) sborab = (b - a) + 1;
    if(c > d) sborcd = (c - d) + 1;
    if(d > c) sborcd = (d - c) + 1;
    ///--------------------------------
    e = min(a, b);
    f = min(e, c);
    minabc = min(f, d);
    e = max(a, b);
    f = max(e, c);
    maxabc = max(f, d);


    cout << (maxabc - minabc) + 1 << endl;


    return 0;
}

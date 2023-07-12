#include<iostream>
using namespace std;
int main( )
{
    int d1, d2, d3, d4, firstsol, sol1, sol2, secondsol, sol3, sol4;
    cin >> d1 >> d2 >> d3 >> d4;

    if(d1 > d2) swap(d1, d2);
    if(d1 > d3) swap(d1, d3);
    if(d1 > d4) swap(d1, d4);
    if(d2 > d3) swap(d2, d3);
    if(d2 > d4) swap(d2, d4);
    if(d3 > d4) swap(d3, d4);

    sol1 = (d1 + d4);
    sol2 = (d2 + d3);
    firstsol = max(sol1, sol2) - min(sol1, sol2);
    sol3 = (d1 + d2 + d3);
    sol4 = d4;
    secondsol = max(sol3, sol4) - min(sol3, sol4);

    cout << min(secondsol, firstsol) << endl;


    return 0;
}

#include<iostream>
using namespace std;
int main( )
{
    int t1, t2, t3, t4, t5, t6, br, CHASOVE, MINUTI, OBSHTO, totove, answerminutes, puutuvane;//T1 I T2 - CHASOVE I MINUTI -- T3 - VREME ZA REGISTRACIA -- T4 I T5 - PUTUVANE V CHASOVE I MINUTI
    cin >> t1, t2 >> t3 >> t4, t5 >> t6 >> br;//BR - BROI UCHENICI -- T6 - MINUTUI ZA NASTANIAVANE NA UCHENICK
    totove = (t1 * 60) + t2;
    puutuvane = t4 * 60 + t5;
    OBSHTO =(t6 + br) + totove + t3;
    answerminutes = totove - OBSHTO;
    CHASOVE = answerminutes / 60;
    MINUTI = answerminutes % 60;
    cout << CHASOVE << " " << MINUTI;

    return 0;
}


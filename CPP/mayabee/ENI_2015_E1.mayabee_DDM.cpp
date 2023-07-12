#include<iostream>
using namespace std;
int main( )
{
    int fl1, new1, fl2, new2, fl3, new3, onefl, sum, broi;
    cin >> fl1 >> fl2 >> fl3;
    onefl = (fl1 + fl2 + fl3) / 3;
    sum = fl1 + fl2 + fl3;
    broi = 0;

    if(fl1 < onefl)
    {
        new1 = fl1 + (onefl - fl1);
        if((fl2 - (onefl - fl1)) <= 0)
        {
            fl3 = fl3 - (onefl - fl1);
            broi = (onefl - fl1)*2;
        }
        else
        {
            new2 = fl2 - (onefl - fl1);
            broi = broi + (onefl - fl1);
        }


    }

    if(new2 < onefl)
    {
        fl3 = fl3 - (onefl - new2);
        broi = broi + (onefl - new2);
        new2 = new2 + (onefl - new2);
    }

    cout << broi << endl;

    return 0;
}

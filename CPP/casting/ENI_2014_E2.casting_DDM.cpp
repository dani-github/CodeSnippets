#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int broi, visoki, sineoki, rusi, minormax, actors, mina, middlea, maxa;
    cin >> minormax;
    cin >> broi >> visoki >> sineoki >> rusi;
    if (visoki == 0 || sineoki == 0 || rusi == 0)
    {
        actors = 0;
    }
    if (minormax == 2)
    {
        actors = min(visoki, sineoki);
        actors = min(actors, rusi);
    }
    if (minormax == 1)
    {
        if (visoki == 1 || sineoki == 1 || rusi == 1)
            actors = 1;
        mina = min(visoki, sineoki);
        mina = min(mina, rusi);
        maxa = max(visoki, sineoki);
        maxa = max(maxa, rusi);
        middlea = (visoki + rusi + sineoki) - (mina + maxa);
        actors = mina - ((broi - middlea) + (broi - maxa));
        ;
    }

    cout << actors << endl;

    return 0;
}

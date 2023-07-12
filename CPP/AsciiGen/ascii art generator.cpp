#include <iostream>
using namespace std;
int main( )
{
    string userInputAscii;

    while(userInputAscii!="Fish" && userInputAscii != "Puppy" && userInputAscii != "Cat" && userInputAscii != "Bird" && userInputAscii != "Rabbit") {
        cout << "Please enter an animal from the following:";
        cout << "Fish,  Bird,  Cat,  Puppy,  Rabbit\n";
        cin >> userInputAscii;
    }



    if (userInputAscii == "Fish")
    {
        cout << "  _\n><_>";
        return 0;
    }



    if (userInputAscii == "Bird")
    {
        cout << " (o> \n //\\ \n v /";
        return 0;
    }
    else
    {

    }



    if (userInputAscii == "Cat")
    {
        cout << " /\\__/\\\n> G .G <\n\\  /\\  /\n (____)";
    }


    if (userInputAscii == "Puppy")
    {
        cout << "                      .-.\n";
        cout << "    (________________()6 `-,\n";
        cout << "    (   __________   /\'\'\"`\n";
        cout << "    //\\\\         //\\\\\n";
        cout << "    \"\" \"\"        \"\" \"\"\n";
        return 0;
    }


    if (userInputAscii == "Rabbit")
    {
        cout << "  //  \n";
        cout << " (\'> \n";
        cout << " /rr \n";
        cout << "*\\))_\n";
        return 0;
    }


}

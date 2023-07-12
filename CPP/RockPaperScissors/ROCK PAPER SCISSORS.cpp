#include <iostream>
#include <ctype.h>
#include <windows.h>
using namespace std;
int main( )

{
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    string playerONE;
    string PLAYERtwo;

    while(playerONE!="R" && playerONE!="P" && playerONE!="S")
    {
        cout << "PLAYER ONE: Rock (R), Paper (P) or Scissors (S)?";
        SetConsoleTextAttribute(hConsole, 255);
        cin >> playerONE;
        SetConsoleTextAttribute(hConsole, 7);
    }
    while(PLAYERtwo!="R" && PLAYERtwo!="P" && PLAYERtwo!="S")
    {
        cout << "PLAYER TWO: Rock (R), Paper (P) or Scissors (S)?";
        SetConsoleTextAttribute(hConsole, 255);
        cin >> PLAYERtwo;
        SetConsoleTextAttribute(hConsole, 7);



    }
    cout << "\nPlayer one: " << playerONE << "\n";
    cout << "Player two: " << PLAYERtwo << "\n\n";

    if(playerONE == PLAYERtwo)
    {
        cout << "Tie!";
    }
    else if(playerONE == "R" && PLAYERtwo == "S")
    {
        cout << "Player One wins!";
    }
    else if(playerONE == "P" && PLAYERtwo == "R")
    {
        cout << "Player One wins!";
    }
    else if(playerONE == "S" && PLAYERtwo == "P")
    {
        cout << "Player One wins!";
    }
    else if(PLAYERtwo == "R" && playerONE == "S")
    {
        cout << "Player Two wins!";
    }
    else if(PLAYERtwo == "P" && playerONE == "R")
    {
        cout << "Player Two wins!";
    }
    else if(PLAYERtwo == "S" && playerONE == "P")
    {
        cout << "Player Two wins!";
    }

}

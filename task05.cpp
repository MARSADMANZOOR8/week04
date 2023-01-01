#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy (int x , int y)
{
  COORD coordinates;
  coordinates.X = x ;
  coordinates.Y = y ;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
   

  int main()
  {
     system("cls");
     cout << "Test"; 
     

     gotoxy(15,15);
                       cout << "##     ##        ##        ######       ####           ##        ####     " << endl;
     gotoxy(16,16);
                       cout << "# #   # #      ##  ##      #    #      #             ##  ##      ##  #    " << endl;
     gotoxy(17,17);
                       cout << "#   #   #     ##    ##     #    #       #           ##    ##     ##   #   " << endl;
     gotoxy(18,18);
                       cout << "#       #    ##########    ######         #        ##########    ##    #  " << endl;
     gotoxy(18,18);
                       cout << "#       #   ##        ##   ##               #     ##        ##   ##    #  " << endl;
     gotoxy(19,19);
                       cout << "#       #  ##          ##  #  #              #   ##          ##  ##    #  " << endl;
     gotoxy(19,19);
                       cout << "#       # ##            ## #    #       #####   ##            ## ######   " << endl;
     return 0;
   }
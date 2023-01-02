#include <iostream> 
using namespace std;
int main ()
{
int holidays ;
cout << "enter the number of holidays :";
cin >> holidays ;
int workingday ;
workingday = 365 - holidays ;
cout << " the working days are : " << workingday << endl ;
int time_for_games ;
time_for_games = (workingday * 63 + holidays * 127) ;
cout << " the time for games is : " << time_for_games << endl ;
int time_for_sleep ;
time_for_sleep = 30000 - time_for_games ;
cout << "the time for cat to sleep well and less to play : " << time_for_sleep << endl ;
float time ;
time = time_for_sleep / 60 ;
cout << "the time for cat : " << time ; 
return 0;
} 





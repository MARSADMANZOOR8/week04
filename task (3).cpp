#include <iostream> 
using namespace std;
int main()
{
string day ;
int total ;
int payable ;
while (true)
{
cout << " enter the day : " ;
cin >> day ;
cout << " enter the total amount : " ;
cin >> total ;
if (day == "sunday")
{
payable = total - total * .10;
cout << " the payable amount is " << payable ;
}
else
{ 
payable = total - total *.5 ;
}
}
return 0;
}
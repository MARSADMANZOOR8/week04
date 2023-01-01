#include <iostream>
using namespace std;
int main ()
{
string name ;
cout << "today is : " ;
cin >> name ;
int amount ;
cout << " total purchase amount is : " ;
cin >> amount ;
float discount ;
discount = amount - amount * 0.10 ;
cout << " the actual amount is " ;

if (name == "sunday" )
{
cout << " the payable amount is " << discount ; 
}
else 
{
cout << " the totlal payable amount is " << amount ;
}
return 0 ;
}

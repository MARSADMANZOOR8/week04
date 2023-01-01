#include <iostream> 
using namespace std;
int main ()
{
string countryname ;
float amount;
float discount ;
cout << " enter the name of the country : " ;
cin >> countryname ;
cout << " enter the amount : ";
cin >> amount ;
if (countryname == "pakistan")
{
discount = amount - amount * .05 ;
cout << " the amount after discount country pakistan " << discount ;
}
if (countryname == "ireland")
{
discount = amount - amount * .10 ;
cout << " amount after the discount : " << discount  ;
}
if (countryname == "india")
{
discount = amount - amount * .20 ;
cout << " amount after the discount : " << discount ;
}
if (countryname == "england" )
{
discount = amount - amount * .30 ;

cout << " amount after the discount : " << discount ;
}

return 0;
}    
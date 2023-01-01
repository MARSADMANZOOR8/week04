#include <iostream> 
using namespace std;
int main ()
{
int num1;
cout << " enter the number of red roses : " ;
cin >> num1 ;
int price1;
price1 = 2 * num1 ;
cout << " the price of the red roses is : " << price1 << endl ;
int num2;
cout << " enter the number of white roses : ";
cin >> num2 ;
float price2;
price2 = 4.10 * num2 ;
cout << "the price of the white  roses is : " << price2 << endl;
int num3;
cout << " enter the number of tulips : " ;
cin >> num3 ;
float price3;
price3 = 2.50 * num3 ;
cout << " the price of the tulips is : " << price3 << endl  ;
float total;
total = price1 + price2 + price3 ;
cout << " the total price of flowers "  << total << endl;
if (total  > 200)
{
float discount;
discount = total - total * .20;
cout << " the amount after the discount is : " << discount ;
}

return 0;
}    
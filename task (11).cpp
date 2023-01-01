#include <iostream>
using namespace std;
void add (); 
int main ()
{

add();
add();

return 0 ;
}

void add ()
{
int number1;
cout << " enter your first number : " ;
cin >> number1 ;
int number2;
cout << " enter your second number : " ;
cin >> number2;
int sum ;
sum = number1 + number2 ;
cout << " the sum of two number : " << sum ;
}   
#include <iostream>
using namespace std;
void add (int number1,int number2);
void sub (int number1,int number2 );
void mul (int number1,int number2 );
void divi (int number1,int number2 );
int main ()
{
int number1,number2;
char   op ;
cout << " enter your first  number : " ;
cin >> number1 ;
cout << " enter your second number : " ;
cin >> number2 ;
cout << " enter operator (+,-,*,/):" ;
cin >> op;
if (op == '+')
{
add (number1 , number2);
}
if (op == '-')
{
sub (number1 , number2 );
}
if (op == '*' )
{ 
mul (number1 , number2);
}
if (op == '/')
{
divi (number1 , number2);
} 
return 0;
}
void add (int number1,int number2 )
{ 
cout << "sum of two number : " << number1 + number2 ;
}
void sub (int number1,int number2 )
{
cout << "subtration :" << number1 - number2 ;
}
void mul (int number1,int number2 )
{
cout << "multiplication :" << number1 * number2;
}
void divi (int number1,int number2 )
{
cout << "division : " << number1 / number2 ;
}
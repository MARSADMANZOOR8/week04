#include <iostream> 
using namespace std;
void menu();
void aggegrate_calculator(float,float,float);
void comparemarks(string,string,float,float);
main()
{
string name1,name2;
float matric1,inter1,ecat1;
float matric2,inter2,ecat2;
int choice;
 while(true)
 {
 menu();
 cout<<"Enter your choice: "<<endl;
 cin>>choice;
   if(choice==1)
   {
      cout<<"Enter name: ";
      cin>>name1;
      cout<<"Enter maric marks: ";
      cin>>matric1;
      cout<<"Enter intermediate marks: ";
      cin>>inter1;
      cout<<"Enter ecat marks: ";
      cin>>ecat1;
   }
   if(choice==2)
   {
      cout<<"Enter name: ";
      cin>>name2;
      cout<<"Enter maric marks: ";
      cin>>matric2;
      cout<<"Enter intermediate marks: ";
      cin>>inter2;
      cout<<"Enter ecat marks: ";
      cin>>ecat2;
   }
   if(choice==3)
   {
      aggegrate_calculator(matric1,inter1,ecat1);
   }
    if (choice ==4)
    {
      aggegrate_calculator(matric2,inter2,ecat2);
    }
    if(choice==5)
    {
      comparemarks(name1,name2,ecat1,ecat2);
    }
      
   
 }

}
void menu()
{
cout << "  ###################################   " << endl ;
cout << "  # #   #      #    #     #   ####  #   " << endl ;
cout << "  # #   #    #  #   # # # #    #    #   " << endl ;
cout << "  # #   #    ####   #  #  #     #   #   " << endl ;
cout << "  #  ###     #  #   #     #   ####  #   " << endl ;
cout << "  ###################################   " << endl << endl;

cout<<"Welcome to UET Admission management system "<<endl<<endl;
cout<<"1. Enter details of first student "<<endl;
cout<<"2. Enter details of second student "<<endl;
cout<<"3. Calculate aggregate of first student "<<endl;
cout<<"4. Calculate aggregate of second student "<<endl;
cout<<"5. Student with roll no 01 "<<endl<<endl;



}
void aggegrate_calculator(float matric,float intermediate,float ecat )
{


float aggegrate ;
aggegrate = (matric / 11) * 0.30 + (intermediate / 5.5) * 0.30 + (ecat / 4) * 0.40 ;
cout << " the aggegrate of the student is " << aggegrate <<endl;
}
void comparemarks(string name1,string name2,float ecat1marks,float ecat2marks) 
{

if (ecat1marks > ecat2marks )
{
cout << "Student with roll no 01 is: " << name1<<endl ;
}
if (ecat2marks > ecat1marks )
{
cout << "student name  : " << name2<<endl;
}
 
}      
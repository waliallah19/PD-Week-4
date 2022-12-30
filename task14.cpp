#include<iostream>
using namespace std;
void header();
void one();
void two();
void three();
void four();
void five();
 int a;
 int matric1,inter1,ecat1;
 string name1;
 int matric2,inter2,ecat2;
  string name2;
  float ag1,ag2;
main()
{
 header(); 
 while(true)
 { cout<<"Press 1 to enter details of 1st student: "<<endl;
   cout<<"Press 2 to enter details of 2nd student: "<<endl;
   cout<<"Press 3 to calculate aggregate of 1st student: "<<endl;
   cout<<"Press 4 to calculate aggregate of 2nd student: "<<endl;
   cout<<"Press 5 to display student with Roll no.01: "<<endl;
  cin>>a;   
   if(a==1)
   {
    one();
   } 
if(a==2)
   {
    two();
   } 

  if(a==3)
   {
    three();
   } 
  if(a==4)
   {
    four();
   } 

 if(a==5)
   {
    five();
   } 
 }
}
void header()
{
cout <<"********************************************************************************" <<endl;
cout <<"*                                                                              *" <<endl;
cout <<"*                   University of engineering and Technology                   *" <<endl;
cout <<"*                       Admission Mangagement System                           *" <<endl;
cout <<"*                                                                              *" <<endl;
cout <<"********************************************************************************" <<endl;
}
void one() 
{
    cout<<"You chose: 1"<<endl;
    cout<<"Enter your Name: "<<endl;
   cin>>name1;
    cout<<"Enter your marks of Matric: "<<endl;
   cin>>matric1;
    cout<<"Enter your marks of Inter: "<<endl;
   cin>>inter1;
    cout<<"Enter your marks of E-Cat: "<<endl;
   cin>>ecat1;
 cout<<"Press any key to continue..."<<endl;
}
void two() 
{
    cout<<"You chose: 2"<<endl;
    cout<<"Enter your Name: "<<endl;
   cin>>name2;
    cout<<"Enter your marks of Matric: "<<endl;
   cin>>matric2;
    cout<<"Enter your marks of Inter: "<<endl;
   cin>>inter2;
    cout<<"Enter your marks of E-Cat: "<<endl;
   cin>>ecat2;
 cout<<"Press any key to continue..."<<endl;
}
void three()
{
   cout<<"You chose: 3"<<endl;
  ag1=(matric1*30/1100)+(inter1*30/550)+(ecat1*40/400);
    cout<<"Aggregate of "<<name1<<" is "<<ag1<<"%."<<endl;
 cout<<"Press any key to continue..."<<endl;
}
void four()
{
   cout<<"You chose: 4"<<endl;
  ag2=(matric2*30/1100)+(inter2*30/550)+(ecat2*40/400);
    cout<<"Aggregate of "<<name2<<" is "<<ag2<<"%."<<endl;
 cout<<"Press any key to continue..."<<endl;  
}
void five()
{
    cout<<"You chose: 5"<<endl;
   if(ecat1>ecat2)
     {
      cout<<"Roll no.01 is "<<name1<<endl;
     } 
  if(ecat1<ecat2) 
     {
      cout<<"Roll no.01 is "<<name2<<endl;
     }
cout<<"Press any key to continue..."<<endl;
}
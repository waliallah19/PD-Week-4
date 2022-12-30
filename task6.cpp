#include<iostream>
#include<windows.h>
using namespace std;
void w();
void a();
void s();
void i();
int main()
{ system("cls");
  a();
  w();
  a();
  i();
  s();
  return 0;
}
void w()
{
  cout<<" #       # "<<endl;
  cout<<" #   #   # "<<endl;
  cout<<" #  # #  # "<<endl;
  cout<<" # #   # # "<<endl;
  cout<<" #       # "<<endl;
}
void a()
{
   
  cout<<"   #####   "<<endl;
  cout<<" #       #   "<<endl;
  cout<<" #########   "<<endl; 
  cout<<" #       #   "<<endl;
  cout<<" #       #   "<<endl<<endl;
}
void s()
{ 
  cout<<"    ##"<<endl;
  cout<<"  #     #"<<endl;
  cout<<"    ##"<<endl;
  cout<<" #      #"<<endl;
  cout<<"    ##"<<endl;
}
void i()
{
  cout<<" #########"<<endl;
  cout<<"     #"<<endl;
  cout<<"     #"<<endl;
  cout<<"     #"<<endl;
  cout<<" #########"<<endl;
}
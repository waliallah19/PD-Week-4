#include<iostream>
#include<windows.h>
using namespace std;
void w();
void a();
void l();
void i();
void gotoxy(int x,int y);
int main()
{ system("cls");
  w();
  a();
  l();
  i();
  return 0;
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void w()
{  gotoxy(10,3);
  cout<<" #       # "<<endl;
   gotoxy(10,4);
  cout<<" #   #   # "<<endl;
   gotoxy(10,5);
  cout<<" #  # #  # "<<endl;
   gotoxy(10,6);
  cout<<" # #   # # "<<endl;
   gotoxy(10,7);
  cout<<" #       # "<<endl;
}
void a()
{
   gotoxy(21,3);
  cout<<"   #####   "<<endl;
   gotoxy(21,4);
  cout<<" #       #   "<<endl;
   gotoxy(21,5);
  cout<<" #########   "<<endl;
   gotoxy(21,6);
  cout<<" #       #   "<<endl;
   gotoxy(21,7);
  cout<<" #       #   "<<endl<<endl;
}
void l()
{ 
   gotoxy(32,3);
  cout<<" ##"<<endl;
   gotoxy(32,4);
  cout<<" #"<<endl;
   gotoxy(32,5);
  cout<<" #"<<endl;
   gotoxy(32,6);
  cout<<" #"<<endl;
   gotoxy(32,7);
  cout<<" ########"<<endl;
}
void i()
{
   gotoxy(43,3);
  cout<<" #########"<<endl;
   gotoxy(43,4);
  cout<<"     #"<<endl;
   gotoxy(43,5);
  cout<<"     #"<<endl;
   gotoxy(43,6);
  cout<<"     #"<<endl;
   gotoxy(43,7);
  cout<<" #########"<<endl;
}
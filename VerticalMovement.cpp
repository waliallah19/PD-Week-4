#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
void playerMove(int,int);
int main()
{
  system("cls");
  printmaze();
  int x=20;
  int y=2;
  while(true)
  { 
    playerMove(x,y);
    if(y < 9)
    {
      y = y + 1;
    }
   if(y==9)
    { 
       gotoxy(x,y-1);
       cout <<" ";
       y=2;
    }
  }
}
void printmaze()
{
  cout<<"###########################################"<<endl;
  cout<<"#                                         #"<<endl;
  cout<<"#                                         #"<<endl;
  cout<<"#                                         #"<<endl;
  cout<<"#                                         #"<<endl;
  cout<<"#                                         #"<<endl;
  cout<<"#                                         #"<<endl;
  cout<<"#                                         #"<<endl;
  cout<<"#                                         #"<<endl;
  cout<<"###########################################"<<endl;
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void playerMove(int x,int y)
{
     gotoxy(x,y-1);
     cout<<" ";
     gotoxy(x,y);
     cout <<"P";
     Sleep(200);
}
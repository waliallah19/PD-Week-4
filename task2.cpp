#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int x,int y);
int main()
{
  system("cls");
  printmaze();
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

#include<iostream>
using namespace std;
main()
{
  int a,diff,m,n,h,wd,gt;
   cout<<"Enter number of holidays: ";
  cin>>a;
  wd=365-a;  
  gt=(63*wd)+(a*127);
  diff=30000-gt;
  m=diff%60;
  n=diff-m;
  h=n/60;
  cout<<"Play time is "<<diff<<" minutes or "<<h<<" Hours and "<<m<<" minutes."<<endl;
}
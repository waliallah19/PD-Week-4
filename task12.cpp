#include<iostream>
using namespace std;
main()
{
  float arr,awr,at,total;
  cout<<"Enter amount of red roses: ";
 cin>>arr; 
  cout<<"Enter amount of white roses: ";
 cin>>awr; 
  cout<<"Enter amount of tulips: ";
 cin>>at; 
  total=(arr*2)+(awr*4.10)+(at*2.50);
  cout<<"Your total amount is $ "<<total<<endl; 
  if(total>200)
   {
   float result;
   result=total-(0.2*total);
   cout<<"Your payable amount is: Rs. "<<result<<endl;
   }
  if(total< 200)
   {
   cout<<"Your payable amount is: Rs. "<<total<<endl;
   }
 
}
 
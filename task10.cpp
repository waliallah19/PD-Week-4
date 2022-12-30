#include<iostream>
using namespace std;
main()
{
  string name;
  int price;
  cout<<"Write Country's name: ";
 cin>>name; 
  cout<<"What is the price of the ticket: ";
 cin>>price;   
 if(name=="pakistan")
   {
   float result;
   result=price-(0.05*price);
   cout<<"Your payable amount is: Rs. "<<result<<endl;
   }
 if(name=="ireland")
   {
   float result;
   result=price-(0.1*price);
   cout<<"Your payable amount is: Rs. "<<result<<endl;
   }
 if(name=="india")
   {
   float result;
   result=price-(0.2*price);
   cout<<"Your payable amount is: Rs. "<<result<<endl;
   }
 if(name=="england")
   {
   float result;
   result=price-(0.3*price);
   cout<<"Your payable amount is: Rs. "<<result<<endl;
   }
 if(name=="canada")
   {
   float result;
   result=price-(0.45*price);
   cout<<"Your payable amount is: Rs. "<<result<<endl;
   }
}
 
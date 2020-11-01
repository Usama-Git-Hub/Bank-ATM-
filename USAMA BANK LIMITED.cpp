#include<iostream>
#include<string>
using namespace std;
int main()
{
int amount=100000;
int withdraw;
int a,b,c,d;
cout<<"please enter your pincode=";
cin>>a;
if(a==1234)
	{
cout<<"**************************\n";
cout<<"*                        *\n";
cout<<"*                        *\n";
cout<<"*   welcome to ubl  ATM  *\n";
cout<<"*                        *\n";
cout<<"*                        *\n";
cout<<"**************************\n";

cout<<"enter 1 for withdraw="<<endl;
cout<<"enter 2 for deposit="<<endl;
cin>>b;
    if(b==1)
    {
	cout<<"please enter cash for withdraw=";
	cin>>withdraw;
	c=amount-withdraw;
	cout<<"your remaining amount is=";
	cout<<c;
	cout<<endl;
	cout<<"thanks for using fatima bank limited";
   }   
     else if(b==2)
     {
   	cout<<"please enter amount to deposit=";
   	cin>>d;
   	c=d-amount;
   	cout<<"your remaining amount is =";
   	cout<<c;
   	cout<<endl;
   	cout<<"thanks for using fatima bank limited";
     }
   
}
   else
   {
   	
   	cout<<"*your pincode is invalid*";
   	cout<<"*try after some time";
	cout<<"**thanks**";
   	
   }
   
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


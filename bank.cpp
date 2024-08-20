/* This is my first */
// Batch As3
#include<iostream>
using namespace std;
int n,i,j;
class Bank
{

int acc,amt;
string name;
public:

Bank()
{

 acc=100;
 amt=1000;
 name="UNKNOWN";

}
void accept();
void display()
{

cout<<"\n"<<name<<"\t"<<acc<<"\t"<<amt;
}



void deposit();
void withdraw();


}b[100];



void Bank::deposit()
{
int ac,f=0,dp;
cout<<"\n Enter the account number";
cin>>ac;

for(i=0;i<n;i++)

{
if(ac==b[i].acc)
{
f=1;
cout<<"\n enter the amount deposit";
cin>>dp;
b[i].amt=b[i].amt+dp;
cout<<"\n amount is deposited successfully";
break;
}

}
if(f==0)
{
cout<<"\n Account not found";
}
}
void Bank::withdraw()
{
int ac,f=0,wt;
cout<<"\n Enter the account number";
cin>>ac;

for(i=0;i<n;i++)

{
if(ac==b[i].acc)
{

f=1;


cout<<"\n enter the amount withdraw";
cin>>wt;

if(wt<=b[i].amt)
{
b[i].amt=b[i].amt-wt;
cout<<"\n amount is withdraw successfully";
//break;
}
else
{
cout<<"\n insufficient balance";

}
break;
}
}
if(f==0)
{
cout<<"\n Account not found";
}
}

void Bank::accept()
{
cout<<"\n Enter the name,acc number,amout";
cin>>name>>acc>>amt;

}




int main()
{

int ch;
do
{
cout<<"\n Main Menu";
cout<<"\n 1.Accept\n2.Display\n3.Deposit\n4.withdraw";
cout<<"\n Enter your choice";
cin>>ch;

switch(ch)
{
case 1:

cout<<"\n Enter the how many ";
cin>>n;
for(i=0;i<n;i++)
{
b[i].accept();
}
break;


case 2:
cout<<"\n Name\tAccount\tAmount";
for(i=0;i<n;i++)
{
b[i].display();
}
break;
case 3:
b[i].deposit();
break;
case  4:
b[i].withdraw();
break;

}
}while(ch!=0);
return 0;
}

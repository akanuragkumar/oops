#include <iostream>
using namespace std;
class BankAccount
{
string name;
int acno;
string actype;
int bal;
public :
void opbal(void);
void deposit(void);
void withdraw(void);
void display(void);
int accountNo(){
return acno;
}
};
void BankAccount :: opbal(void)
{
cout<<endl<<endl;
cout<<"Enter Name :";
cin>>name;
cout<<"Enter A/c no. :";
cin>>acno;

cout<<"Enter A/c Type(SB/RD) :";
cin>>actype;
cout<<"Enter Opening Balance:";
cin>>bal;
}
void BankAccount :: deposit(void)
{
cout<<"Enter Deposit amount :-";
int deposit=0;
cin>>deposit;
deposit=deposit+bal;
cout<<"\nDeposit Balance = "<<deposit;
bal=deposit;
}
void BankAccount :: withdraw(void)
{
int withdraw;
cout<<"\nBalance Amount = "<<bal;
cout<<"\nEnter Withdraw Amount : ";
cin>>withdraw;
bal=bal-withdraw;
cout<<"After Withdrawal the Balance is: "<<bal;
}
void BankAccount :: display(void)
{
cout<<endl<<endl<<endl;
cout<<"DETAILS"<<endl;
cout<<"name "<<name<<endl;
cout<<"A/c. No. "<<acno<<endl;
cout<<"A/c Type "<<actype<<endl;
cout<<"Balance "<<bal<<endl;
}
int main()
{
BankAccount o1;
int numAccounts = 0,accNo = 0,index = -1;
cout<<"Enter number of accounts to create:";
cin>>numAccounts;
BankAccount *accounts = new BankAccount[numAccounts];
cout<<"Enter inital data of all";
cout<<"<<numAccounts"<<"customers";

for(int i = 0; i<numAccounts; i++)
{
accounts[i].opbal();
}
int choice;
 do
 {
 cout<<"\n\nTransaction Choice List\n\n";
 cout<<"1) To Deposit\n";
 cout<<"2) To Withdraw\n";
 cout<<"3) To Display All Details\n";
 cout<<"4) EXIT\n";

 cout<<"Enter your choice :";
 cin>>choice;
 if(choice == 4)
break;
 cout<<"Enter a/c number for transaction:"<<endl;
 cin>>accNo;
 index = -1;
 for(int i = 0;i<numAccounts;i++)
{
if(accounts[i].accountNo() == accNo)
{
index = i;
break;
}
}
if(index == -1)
{
cout<<"Error:Account Not Found.."<<endl;
continue;
}

 switch(choice)
 {
 case 1: accounts[index].deposit();
 break;
 case 2: accounts[index].withdraw();
 break;
 case 3: accounts[index].display();
 break;
 }
 }while(1);
 return 0;
}

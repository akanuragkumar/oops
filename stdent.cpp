#include <iostream>
using namespace std;
#define MAX 2 //You can change to the requirement
//Base class with member fields and member function
class STUDENT
{
private:
string name;
string regno;
int age;
public:
void inputdata();
int getage()
{
return(age);
}
};
void STUDENT::inputdata()
{
cout<<"Enter the name : ";
cin >> name;
cout<<"Enter the register number : ";
cin >> regno;
cout<<"Enter the age : ";cin >> age;
}
/*Derived class for ugstudent with member fields and functions*/
class UGstudent:public STUDENT
{
private:
int semester;
float fees;
float stipend;
public:
void inputugdata();
int getsemester()
{
return(semester);
}
};
void UGstudent::inputugdata()
{
STUDENT::inputdata();
cout<<"\nEnter the semester(1,2,3,4,5,6,7,8) :";
cin >> semester;
cout<<"Enter the fees : ";
cin >> fees;
cout<<"Enter the stipend : ";
cin >> stipend;
}
/*Derived class for pgstudent with member fields and functions*/
class PGstudent:public STUDENT
{
private:
int semester;
float fees;
float stipend;
public:
void inputpgdata();
int getsemester()
{
return(semester);
}
};
void PGstudent::inputpgdata()
{
STUDENT::inputdata(); // Calling base class function
cout<<"\nEnter the semester(1,2,3) : ";
cin >> semester;
cout<<"Enter the fees : ";
cin >> fees;cout<<"Enter the stipend : ";
cin >> stipend;
}
// main program
int main()
{
UGstudent ugstudent[MAX]; /*for MAX ugstudent*/
PGstudent pgstudent[MAX]; /*for MAX pgstudent*/
int i;
cout<<"Enter the details of UG students"<<endl;
for(i=0;i<MAX;i++) //accepting MAX ugstudent data
{
ugstudent[i].inputugdata();
}
/* 8 variables to hold total age of each semister*/
int total1=0,total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,total8=0;
/* 8 variables to hold no. of student in each semister*/
int tco1=0,tco2=0,tco3=0,tco4=0,tco5=0,tco6=0,tco7=0,tco8=0;
int tempsem=0,tempage=0;
for(i=0;i<MAX;i++)
{
tempsem=ugstudent[i].getsemester();
switch (tempsem)
{
case 1 :
tempage=ugstudent[i].getage();
total1 += tempage;
++tco1;
break;
case 2 :
tempage=ugstudent[i].getage();
total2 += tempage;
++tco2;
break;
case 3 :
tempage=ugstudent[i].getage();
total3 += tempage;
++tco3;
break;
case 4 :
tempage=ugstudent[i].getage();
total4 += tempage;
++tco4;
break;
case 5 :
tempage=ugstudent[i].getage();
total5 += tempage;++tco5;
break;
case 6 :
tempage=ugstudent[i].getage();
total6 += tempage;
++tco6;
break;
case 7 :
tempage=ugstudent[i].getage();
total7 += tempage;
++tco7;
break;
case 8 :
tempage=ugstudent[i].getage();
total8 += tempage;
++tco8;
break;
}
}
cout<<"\nEnter the details of PG students"<<endl;
for(i=0;i<MAX;i++) /*accept the MAX pgstudents data*/
{
pgstudent[i].inputpgdata();
}
/*3 variables to hold total age of each semister*/
int tot1=0,tot2=0,tot3=0;
/*3 variables to hold no. of student in each semister*/
int tc1=0,tc2=0,tc3=0;
int temsem=0,temage=0;
for(i=0;i<MAX;i++)
{
temsem=pgstudent[i].getsemester();
switch (temsem)
{
case 1 :
temage=pgstudent[i].getage();
tot1 += temage;
++tc1;
break;
case 2 :
temage=pgstudent[i].getage();
tot2 += temage;
++tc2;
break;
case 3 :
temage=pgstudent[i].getage();
tot3 += temage;++tc3;
break;
}
}
//clrscr(); /*displaying the result on the screen*/
cout<<"\nUG STUDENT'S INFORMATION..."<<endl;
if (tco1 != 0)
{
cout <<"\nAverage age of 1st semester student : ";
cout <<(float)total1/tco1;
}
if (tco2 != 0)
{
cout <<"\nAverage age of 2nd semester student : ";
cout <<(float)total2/tco2;
}
if (tco3 != 0)
{
cout <<"\nAverage age of 3rd semester student : ";
cout <<(float)total3/tco3;
}
if (tco4 != 0)
{
cout <<"\nAverage age of 4th semester student : ";
cout <<(float)total4/tco4;
}
if (tco5 != 0)
{
cout <<"\nAverage age of 5th semester student : ";
cout <<(float)total5/tco5;
}
if (tco6 != 0)
{
cout <<"\nAverage age of 6th semester student : ";
cout <<(float)total6/tco6;
}
if (tco7 != 0)
{
cout <<"\nAverage age of 7th semester student : ";
cout <<(float)total7/tco7;
}
if (tco8 != 0)
{cout <<"\nAverage age of 8th semester student : ";
cout <<(float)total8/tco8;
}
cout<<"\n\nPG STUDENT'S INFORMATION...";
if (tc1 != 0)
{
cout <<"\nAverage age of 1st semester student : ";
cout <<(float)tot1/tc1;
}
if (tc2 != 0)
{
cout <<"\nAverage age of 2nd semester student : ";
cout <<(float)tot2/tc2;
}
if (tc3 != 0)
{
cout <<"\nAverage age of 3rd semester student : ";
cout <<(float)tot3/tc3;
}
}

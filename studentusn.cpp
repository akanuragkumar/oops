#include<iostream>
using namespace std;
class Student
{
private:
string usn;
string name;
float m1,m2,m3;
float avg;
public:
void readInput();
void compute();
void displayOutput();
};
void Student :: readInput()
{
cin>>usn;
cin>>name;
cin>>m1>>m2>>m3;
}
void Student :: compute()
{
if(m1<m2 && m1<m3)
avg=(m2+m3)/2.0;
else if(m2<m3)
avg=(m1+m3)/2.0;
else
avg=(m1+m2)/2.0;

}
void Student :: displayOutput()
{
cout<<"\n-----------------------------------------\n";
cout<<name<<" details\n";
cout<<"-------------------------------------------\n";
cout<<"USN no is "<<usn;
cout<<"\nName is "<<name;
cout<<"\nMarks1 is "<<m1;
cout<<"\nMarks2 is "<<m2;
cout<<"\nMarks3 is "<<m3;
cout<<"\nAverage of, best of two subjects is "<<avg;
cout<<"\n-----------------------------------------\n";
}
int main()
{
int n,i;
cout<<"\nEnter the number of Students:\n";
cin>>n;
Student *s = new Student[n];
for(i=0;i<n;i++)
{ cout<<i+1<<":Enter USN Name m1 m2 m3:";
s[i].readInput();
}
for(i=0;i<n;i++)
s[i].compute();
for(i=0;i<n;i++)
s[i].displayOutput();
delete []s;
return 0;
}


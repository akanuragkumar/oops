a. Write a C++ program to read three numbers from the keyboard and
display the largest value on the screen.
#include<iostream>
using namespace std;
// program find largest of 3 numbers
int findLargest(int a, int b,int c);
int main()
{
int a,b,c,largest;
cout<<"Ener the numbers"<<endl;
cin>>a>>b>>c;
largest = findLargest(a,b,c);
cout<<"Largest number is:"<<largest<<endl;
return 0;
}
int findLargest(int a, int b,int c){
int large = a;
if(b>large)
large = b;
if(c>large)
large = c;
return large;
}
31 b. Write a C++ program to check whether the given number is an
Armstrong number or not.(Hint: Armstrong number 153=1^3 + 5^3 + 3^3 ).
#include<iostream>
using namespace std;
// program o check if amstrong number
// Eg: for amstrong: 371,153
int checkAmstrong(int n);
int main()
{
int num;
cout<<"Ener the number"<<endl;
cin>>num;
if(checkAmstrong(num))
cout<<"The Number is
amstrong."<<endl;
else
cout<<"The Number is NOT
amstrong."<<endl;
return 0;
}
int checkAmstrong(int n){
int temp = n, rem, num=0;
while(temp)
{
rem=temp%10;
num += rem*rem*rem;
temp/=10;
}
if(num==n)
return 1;
else
return 0;
}
1
c. Write a C++ program to find and display Factorial of a number.
(Using iterative method or recursion).
#include<iostream>
using namespace std;
int factorial(int n);
int ifactorial(int n);
int main()
{
int num;
cout<<"Ener the number"<<endl;
cin>>num;
if(num<0) {
cout<<"Error -ve number..re-run."<<endl;
return 1;
}
cout<<"Factorial(recursive) of "<<num<<" is :
"<<factorial(num)<<endl;
cout<<"Factorial(nonrecurs) of "<<num<<" is :
"<<ifactorial(num)<<endl;
return 0;
}
// Using recurion
int factorial(int n){
int temp = n, rem, num=0;
if(n == 0)
return 1;
else
return n*factorial(n-1);
}
// Using iteration(loop)
int ifactorial(int n){
int fact = 1;
for(int i=n; i>1; i--)
fact*=i;
return
fact;
}
1 d. Write a C++ program to print ASCII value of a character.
#include <iostream>
using namespace std;
int main(){
char asc;
int numeric;
cout << "Enter character: ";
cin >> asc;
cout << "Its ascii value is: " << int(asc) <<
endl;
return 0;
}
1 e. Write a C++ program that will accept an array of numbers and
display the number of times the given number occurred in the array.
#include<iostream>
#include<string>
using namespace std;
// Write a program to accept n no’s and a
number to search and print
// how many times it occurs in array.
int main()
{
int total,i,ele,count = 0;
cout<<"How many numbers : ";
cin>>total;
int *p = new int[total];
cout<<"Enter "<<total<<" Numbers:";
i = 0;
while(i<total)
{
cin>>p[i++];
}
cout<<"Enter element to search: ";
cin>>ele;
i = 0;
while(i<total)
{
if(p[i++] == ele)
count++;
}
cout<<ele<<" appears "<<count<<" times."<<endl;
delete []p;
return 0;
}

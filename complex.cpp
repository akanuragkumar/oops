#include<iostream>
using namespace std;
class Complex
{
int real;
int img;
public:
Complex(int r = 0, int i = 0):real(r),img(i){ }
// Operator overloads as members
Complex& operator=(const Complex& rhs);
Complex& operator+=(const Complex& rhs);
Complex& operator++(); // Prefix
Complex operator++(int); // Postfix
// Operator overloads as non-members
friend Complex operator+(const Complex& lhs, const Complex& rhs);
friend Complex operator-(const Complex& lhs, const Complex& rhs);
friend bool operator==(const Complex& lhs, const Complex& rhs);
friend ostream& operator<<(ostream& out, const Complex& rhs);
friend istream& operator>>(istream& in, Complex& rhs);
};
Complex& Complex::operator=(const Complex& rhs)
{
real = rhs.real;
img = rhs.img;
return *this;
}
Complex& Complex::operator+=(const Complex& rhs)
{
real+= rhs.real;
img += rhs.img;
return *this;
}
Complex& Complex::operator++()
{
real++;
img++;
return *this;
}
Complex Complex::operator++(int){
Complex temp(real,img);
++*this;
return temp;
}
Complex operator+(const Complex& lhs, const Complex& rhs)
{
Complex temp(lhs.real+rhs.real, lhs.img+rhs.img);
return temp;
}
Complex operator-(const Complex& lhs, const Complex& rhs){
Complex temp(lhs.real-rhs.real, lhs.img-rhs.img);
return temp;
}
bool operator==(const Complex& lhs, const Complex& rhs)
{
bool temp(lhs.real == rhs.real && lhs.img == rhs.img);
return temp;
}
bool operator!=(const Complex& lhs, const Complex& rhs)
{
bool temp = !(lhs == rhs);
return temp;
}
ostream& operator<<(ostream& out, const Complex& rhs)
{
out<<"Complex no: "<<rhs.real<<" + "<<rhs.img<<"i";
return out;
}
istream& operator>>(istream& in, Complex& rhs){
cout<<"Complex no:Enter real & img:";
in>>rhs.real>>rhs.img;
return in;
}
int main(){
Complex c1,c2,c3;
cin>>c1>>c2;
cout<<c1<<endl<<c2<<endl;
c3 = c1+c2;
cout<<"Sum:c3 = c1+c2:"<<c3<<endl;
Complex c4 =c1-c2;
cout<<"Sub:c4 = c1-c2:"<<c4<<endl;
cout<<"++C1: "<<++c1<<endl;
cout<<"c1 != c2:"<<(c1!=c2)<<endl;
cout<<"c4 += c3:"<<(c4+=c3)<<endl;
return 0;
}

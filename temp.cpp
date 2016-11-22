#include<iostream>
using namespace std;
class Temperature
{
private:
float tempC;
float tempF;
public:
Temperature(){
tempF = 0;
tempC = (tempF-32.0)*5.0/9.0;
}
void readInput();
void convertToCelsius();
void displayOutput();
};
void Temperature::readInput(){
cout<<"Enter Temperature in Fahrenheit :";
cin>>tempF;
}
void Temperature::convertToCelsius(){
tempC = (tempF-32)*5/9;
}
void Temperature::displayOutput(){
cout<<"Temp in Celsius: "<<tempC<<endl;
cout<<"Temp in Fahrenh: "<<tempF<<endl;;
}
int main(){
Temperature t;
t.readInput();

t.convertToCelsius();
t.displayOutput();
return 0;
}

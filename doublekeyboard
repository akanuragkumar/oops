class InputException{
};
class DivideException{
};
void input(double&, double&);
double divide(double&, double&);
int main(){
double a,b,c = 0;
int error = 0;
try{
input(a,b);
}
catch(InputException e){
cout<<"InputException caught: Resetting a & b"<<endl;
a=b=0;
error = 1;
}
try{
c = divide(a,b);
}
catch(DivideException e){
cout<<"DivideException caught!!!"<<endl;
error = 1;
}
catch(...){ // Any other exception
cout<<"Unknown exception caught!!!"<<endl;
error = 1;
}
if(!error)
cout<<"a="<<a<<" b="<<b<<" a/b="<<c<<endl;
elsecout<<"Operation failed...!!!"<<endl;
}
void input(double& a, double& b)
{
cout<<"Enter two doubles:";
cin>>a>>b;
if(cin)
cout<<"Input Success"<<endl;
else
{
cout<<"Input Error"<<endl;
throw InputException();
}
}
double divide(double& a, double& b)
{
if(b == 0.0)
{
throw DivideException();
}
return a/b;
}

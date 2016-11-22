#include<iostream>
#include<string.h>
using namespace std;
class S
{  string s;
    public :
       S()
       {s="  ";}
       
     S(string p)
     {s=p;}
     
     S(const S &p)
     {s=p.s;}
     
     S operator + (const S &p)
     {S str;
       str.s=s+p.s;
       return str;}
       
      void print()
	  {cout<<s;}};
	  
	  
	  main()
	  { S a;
	    S b("Good");
	     S c(" LUCK");
	     S d(b);
		 S e=d+c;
	      e.print();}

#include<iostream>
using namespace std;
template<class T>
int part(T *A,int s, int e)
{
  int ind=s;
  T p=A[e];
  int i; T tmp;
  for(i=s;i<e;i++)
    {
       if(A[i]<=p)
       {
          tmp=A[ind];
          A[ind]=A[i];
          A[i]=tmp;ind++;
        }
    }
    
    tmp=A[ind];
    A[ind]=A[e];
    A[e]=tmp;
    
    return ind;
}
template <class T>
void QS(T *A, int s, int e)
{  int ind;
    if(s<e)
    {
       ind=part(A,s,e);
        QS(A,ind+1,e);
        QS(A,s,ind-1);
    }
}


 main()
  {
   int A[]={5,4,2,1,3,0,2,-1,6};
    QS(A,0,8);
    for(int i=0;i<9;i++)
     cout<<A[i]<<"\t";}                        

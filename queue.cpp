#include <iostream>
using namespace std;
#define max 5
template <class Q>
class QUEUE
{
int f,r;
Q q[max];
public:
QUEUE()
{
f=-1;
r=-1;
}
void insert(Q);
void del();
};
// Member defintions
template <class Q>
void QUEUE<Q>::insert(Q item)
{
if (r==max-1)
{
cout<<"queue is full"<<endl;
return;
}
r++;
q[r]=item;
if(f==-1)
f++;
if(f==-1)
{
cout<<"queue is empty"<<endl;
return;
}
cout<<"contents of the queue"<<endl;
for(int i=f;i<=r;i++)
cout<<q[i]<<endl;
}
template<class Q>
void QUEUE<Q>::del()

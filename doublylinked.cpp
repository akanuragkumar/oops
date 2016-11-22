#include<iostream>

using namespace std;
class node{public : int data; node *next;node *prev;};
class DLIST{  
 node *start;
 public :
 DLIST(){start=NULL;}
 void insert()
 {  int dat;
    cout<<"\nEnter data to be entered : ";
    cin>>dat;
    node *np=new node;
    np->data=dat;
    int pos,i=1;
    cout<<"\nEnter pos at which insertion has to be made : ";
    cin>>pos;
    if(start==NULL){np->next=np->prev=NULL;start=np;}
	
	else{
	node *tmp=start;
	while(i!=pos)
    {if(tmp->next==NULL) {i=-1;break;}
	tmp=tmp->next; i++;}
    if(i==1)
    {np->prev=NULL;start->prev=np;np->next=start;start=np;}
   else if(i==-1)
   {np->next=NULL;np->prev=tmp;tmp->next=np;}
	
	
	else
    {np->next=tmp;
      np->prev=tmp->prev;
      tmp->prev->next=np;
      tmp->prev=np;}}}
      
      
    void dlete()
    {int pos,i=1;
     cout<<"\nEnter position to be deleted : ";
     cin>>pos;
     node *tmp=start;
	 if(start==NULL) cout<<"\nEMPTY!!!!";
     else
     {
	 while(i!=pos)
       {
	   tmp=tmp->next;i++;}
        if(i==1)
        { tmp->next->prev=NULL;start=tmp->next;delete tmp;}
        	
		else if(tmp->next==NULL){tmp->prev->next=NULL;delete tmp;}
		else
        {  tmp->next->prev=tmp->prev;
            tmp->prev->next=tmp->next;
            delete tmp;}}}
            
        void display()
        {
          cout<<"\nLIST : \n";
           node *tmp=start;
             while(tmp!=NULL)
             { cout<<tmp->data<<"<----->"; tmp=tmp->next;}}};
             
             
    main()
    {  DLIST m;
       int ch;
       for(;;)
       {
      cout<<"\nEnter choice : \n1.Insert\n2.Delete\n3.DIsplay\n";
       cin>>ch;
       switch(ch)
       {
         case 1 : m.insert();break;
         case 2 : m.dlete();break;
         case 3 :  m.display();break;}}
       
       
       
       
	   
	   
	   
	   
	   
	   }

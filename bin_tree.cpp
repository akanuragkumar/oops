                        #include<iostream>
using namespace std;
class node{public : int data; node * left ; node * right;};

class BT{public :
            node *root;
            
			 BT(){root=NULL;}
			 void insert()
			 { int d;
			   cout<<"\nENter value : ";
			   cin>>d;
			   node *tmp=new node;
			   node *parent,*current;
			   tmp->data=d;
			   tmp->left=tmp->right=NULL;
			   if(root==NULL) root=tmp;
			   else{ current=root;parent=NULL;
			        while(1)
			        {  parent=current;
			           if(d<parent->data)
			           {
			              current=current->left;
			              if(current==NULL)
			              {parent->left=tmp;return;}
			              }
			              else
			              { 
			                 current=current->right;
			                 if(current==NULL)
			                 {parent->right=tmp;return;}}}}}
			                 
			                 
			                 
			       void pre(node * root)
				  {  if(root!=NULL)
				      {  cout<<root->data<<"\t";
				          pre(root->left);
				          pre(root->right);}}
				          
				          
				    void post(node * root)
				    {  if(root!=NULL)
				       {
				          post(root->left);
				        post(root->right);
				        cout<<root->data<<"\t";}}
				        
				    void in(node * root)
				    {if(root!=NULL)
				       {  
				          in(root->left);
				           cout<<root->data<<"\t";
				           in(root->right);}}
				       };
				       
				       
	main()
	{
    int i;BT m;
   m.insert(); m.insert(); m.insert(); m.insert(); m.insert(); m.insert(); m.insert();

         
         
          cout<<"\nPreorder traversal: ";
   m.pre(m.root);

   cout<<"\nInorder traversal: ";
   m.in(m.root);

   cout<<"\nPost order traversal: ";
   m.post(m.root);       }

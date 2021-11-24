#include <bits/stdc++.h>

using namespace std;
class node{
    int val;
    node *link;
 public:
 node();
 node(int key){
     val = key;
     link = NULL;
    }
    friend class llist;
};
class llist{
    public:
    void insertstr(node *str,int key);
    void insertin(node *str,int loc,int key);
    void insertend(node *str,int key);
    void deletestr(node *str,int key);
    void deletein(node *str,int key);
    void deleteend(node *str,int key);
    void displaylist(node *str);
    int totalNodes(node *str);
};
void llist::insertstr(node *str,int key){
    node *new1 = new node(key);
    new1->link = str;
    str = new1;
}
void llist::insertin(node *str,int loc1,int key){
    node *new1 = new node(key);
    node *loc;
    loc->val = loc1;
    new1->link = loc->link;
    loc->link = new1;
}
int llist :: totalNodes(node *str){
    node *p = str;
    int n;
    while(p->link){
        n++;
        p=p->link;
    }
    return n;
}
void llist :: displaylist(node *str){
    int a= totalNodes(str);
    node *m = str;
    if(str==NULL) {
        cout<<"List id empty\n";
    }
    else{
        for(int i=0;i<a;i++){
           cout<< m->val;
           m  = m->link;
        }
    }
}
int main()
{
    llist obj;
    node *str;
    while(1){
        cout<<" 1: insert at start\n 2: insert at location\n 3: insert at end\n 4: display";
         int n;
        cin>>n;
        switch(n){
         case 1:
         cout<<"Enter key\n";
         int key;
         cin>>key;
         obj.insertstr(str,key);
         break;
        case 2:
         cout<<"Enter key and location\n";
         int key1,loc1;
         cin>>key1;
         cin>>loc1;
         obj.insertin(str,loc1,key1);
         break;
         case 3: 
         int key2;
         cin>>key2;
         obj.insertend(str,key2);
         break;
         
        }
    }
    return 0;
}

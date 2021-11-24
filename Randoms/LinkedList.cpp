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
    void insertstr(node *str,int key);
    void insertin(node *str,node *loc,int key);
    void insertend(node *str,int key);
    void deletestr(node *str,int key);
    void deletein(node *str,int key);
    void deleteend(node *str,int key);
    
};
void llist::insertstr(node *str,int key){
    node *new1 = new node(key);
    new1->link = str;
    str = new1;
}
void llist::insertin(node *str,node *loc,int key){
    node *new1 = new node(key);
    new1->link = loc->link;
    loc->link = new1;
}

int main()
{
    llist obj;
    node *str;
    while(1){
        cout<<"1: insert at start\n 2: insert at location\n 3: insert at end\n";
         int n;
        cin>>n;
        switch(n){
         case 1:
         cout<<"Enter key\n";
         int key;
         cin>>key;
          obj.insertstr(node *str,int key);
          break;
        case 2:
        cout<<"Enter key and location\n";
         int key1,loc;
         cin>>key;
         cin>>loc;
         obj.insertin(node *str,node *loc,int key1);
         break;

        }
    }
    return 0;
}


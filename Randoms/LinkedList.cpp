#include <iostream>

using namespace std;
class node{
    int val;
    node *next;
    public:
    node();
    node(int key){
        key = val;
        next = NULL;
    }
    friend class Llist;
    
}
class Llist{
    void insertstr(int key);
    void insertmid(int key);
    void insertend(int key);
    void delstr();
    void delmid();
    void delend();
}

void Llist ::insertstr(int key){
    node *new1 = new node(key);
    
}
int main()
{
    cout<<"Hello World";

    return 0;
}


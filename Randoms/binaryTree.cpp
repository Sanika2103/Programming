#include <iostream>

using namespace std;
class node{
  char c;
  node *left;
  node *right;
  public:
  node(){
    c = NULL;
    right = NULL;
    left = NULL;
  }
  friend class tree;
}
class tree{
    void insert(node *val);
    void display();
    void inorder(node *val);
}
int main()
{
    
    return 0;
}

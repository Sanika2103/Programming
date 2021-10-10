#include <iostream>
#include <stack>
using namespace std;

// Declaring stack class & making it generic

template <class T>
class stack;

// Declairing node class

template <class T>
class node{
 T info;
 node <T> *next;
 friend class stack <T>;
 public: node(){
 next = NULL;
 info = NULL;
};

//Declairing satck class

class stack{
node <T> *top;
public:
stack();
bool isEmpty();
bool isFull();
void push();
void pop();
void display();
};

//Declairing expression class

class expression{
public:
void convertInToPre();
void convertPreToIn();
void EvaluatePre();
void EvaluatePost();
void input();
void display();
};



// Declairing stack constructor

template <class T>
stack <T>::stack(){
	top = NULL;
}

//Check if stack is Empty

template <class T>
bool stack<T>::isEmpty(){
	if(stack.empty())
	 cout<<"Stack is empty"<<endl;
}

// Check if stack is Full

template <class T>
bool stack<T>::isFull(){
	if(top->next == NULL)
	 cout<<"Overflow : Stack is full"<<endl;
}

// Push an element into stack

template <class T>
void stack<T>::push(){
	node <T> *new1 = new node <T>;
	if(isEmpty()){
		top = new1;
		top->next = new1;
	}
	else{
		new1->next = top;
		top = new1;
		}
	};
int main(){
    int n;
    cout<<"Enter 1: Push an element \n 2: Pop an element \n 3: Display \n 4: Convert Infix to Prefix"<<endl;
    cout<<"5: Input \n 6: Covert Prefix to Infix \n 7: Evaluate Prefix \n 8: Evaluate Postfix \n 9: Exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>n;
    stack <int> obj;
    expression obj1;
    while(1){
        switch (n)
        {
        case 1:
            obj.push();
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.push();
            break;
        case 4:
            obj1.convertInToPre();
            break;
        case 5:
            obj1.input();
            break;
        case 6:
            obj1.convertPreToIn();
            break;
        case 7:
            obj1.EvaluatePre();
            break;
        }
    }
    return 0;
}

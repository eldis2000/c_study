#include <iostream>
#include <stack>
using namespace std;

void printStackElements(stack<int> stack) {
    while(!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}


int main()
{
    // stack is last in first out (LIFO)
    // empty, size, push, pop, top
    stack<int> numberStack;
    numberStack.push(1);
    numberStack.push(2);
    numberStack.push(3);
    numberStack.pop();

    printStackElements(numberStack);

    /*
    if(numberStack.empty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty" << endl;
    cout<<"Stack size is " << numberStack.size() << endl;
    */

    system("pause>0");
}

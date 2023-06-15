#include <iostream>
#include <stack>
using namespace std;

void stack_print(stack<int> s){
    vector<int> v;
    while(!s.empty()){
        int a;
        a = s.top();
        v.push_back(a);
        s.pop();
    }
    reverse(v.begin(), v.end());
    vector<int> ::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
   /*
   stack: Last-in and First-Out  (stack pancakes)
   */
    stack<int> s; //initaite int-type stack
  
    s.push(1); //place data in stack
    s.push(2);
    s.push(3);
    s.push(4);
    
    cout << "First element in stack: " << s.top() << endl; //show element at top of stack
    cout << "Stack Amount Elements: " << s.size() << endl;
    cout << "No Objects in Stack? " << boolalpha << s.empty() << endl;
    
    s.pop(); //removes element from top of stack

    return 0;
}

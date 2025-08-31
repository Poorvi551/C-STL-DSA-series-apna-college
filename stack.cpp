#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;          // Initialize Stack
    s.push(6);            // Inserting element to the stack -LIFO
    s.push(7);
    s.push(8);
    s.push(2);
    s.push(9);
    s.push(1);
    s.pop();              // Removes the top element - last inserted element - 1
    cout << "Top:" << s.top() << endl;    // 9
    return 0;
}
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d={2,3,4};   // Initialize Deque
    d.push_front(4);       // Element inserted at the front of Deque
    d.push_back(3);        // Element inserted at the back  of Deque
    d.emplace_back(6);     // Element inserted at the back of Deque
    d.emplace_front(1);    // Element inserted at the front of Deque
    d.push_front(7);       // Element inserted at the front of Deque
    d.pop_front();
    d.pop_back();
    for(int val:d){
        cout << val << " ";
    }
    cout << endl;
    return 0;

}

#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l={1,4};      // Initialize list
    l.push_back(3);        // Element inserted at the back
    l.emplace_back(6);     // Element inserted at the back
    l.emplace_front(2);    // Element inserted at the front
    l.push_front(7);       // Element inserted at the front
    l.pop_front();
    l.pop_back();
    for(int val:l){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
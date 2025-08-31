#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;            // Initializing queue
    q.push(1);              // Adding or inserting elements into the queue
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5); 
    q.pop();                // Removes the first element in the queue
    while(!q.empty()){
        cout << q.front() << " ";         // Prints the element at the front in the queue
        q.pop();
    }
    cout << endl;
    cout << "Q Size:" << q.size() << endl;
    cout <<"Q Empty:"<< q.empty() << endl;
    cout << "Q Size:" << q.size() << endl;
    cout << endl;
    return 0;
}
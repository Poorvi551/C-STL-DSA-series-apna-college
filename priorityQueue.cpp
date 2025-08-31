#include<iostream>
#include<queue>
using namespace std;
                                   //descending form - greater --> lower
int main(){
    priority_queue<int>pq;       // Priority Queue Initialization - priority queue stores values in the descending form of stack 
    pq.push(5);              // Inserting values int priority queue
    pq.push(3);
    pq.push(7);
    pq.emplace(12);
    pq.emplace(8);
    cout << " Q Size:" << pq.size()<< endl;
    while(!pq.empty()){
        cout << pq.top() << " ";    // Prints the top element
        pq.pop();
    }
    cout << endl;
    cout << " Q Empty: " << pq.empty() << endl;
    cout << " Q Size:" << pq.size()<< endl;
    return 0;
}
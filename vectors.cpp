#include<iostream>
#include<vector>
using namespace std;
// Initialize vector using push_back and emplace_back function and prints the size.
int main(){
    vector<int>vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(8);
    vec.emplace_back(9);
    vec.emplace_back(5);
    vec.emplace_back(6);
    vec.emplace_back(3);
    vec.emplace_back(7);
    for(int val:vec){
        cout << val << " ";
    }
    cout << vec.size() << endl;//prints the size of the vector
    cout << "Value at index 2 :"<< vec.at(2) << " or " << vec[2] << endl; //retrieves the value at index 2
    cout << "Value at front :"<< vec.front() << endl;
    cout << "Value at back :"<< vec.back() << endl;
    return 0;
}                              
// 2 4 8 9 5 6 3 7 8
// Value at index 2 :8 or 8
// Value at front :2
// Value at back :7
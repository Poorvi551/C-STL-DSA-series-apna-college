#include<iostream>
#include<vector>
using namespace std;
// Initialize vector using push_back and emblace_back function and prints the value of the elements.
int main(){
    vector<int>vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(8);
    for(int val:vec){
        cout<< val <<" ";
    }
    cout << endl;
    return 0;
}
//Storing a specific element multiple tims in a vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(3,7);// stores a number 7 3 times
    for(int val:vec){
        cout << val << " ";   
    }
    cout << endl;
    return 0;
}                     // 7 7 7
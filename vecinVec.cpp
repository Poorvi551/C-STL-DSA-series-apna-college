#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1={1,5,7,8,9};
    vector<int>vec2(vec1);//create a new vector with an existing vector
    for(int val:vec2){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}                      // 1 5 7 8 9
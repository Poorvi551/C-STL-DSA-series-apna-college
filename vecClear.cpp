#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,5,7,8,9,2,3,5,4,6};
    vec.clear();
    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    return 0;
}
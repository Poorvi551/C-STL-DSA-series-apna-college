#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,5,7,8,9,2,3,5,4,6};
    vec.erase(vec.begin());//removes the first element
    vec.erase(vec.begin()+2,vec.begin()+5);// removes the elements in range 2-5  892 are removed
    for(int val:vec){
        cout << val <<" ";
    }
    // cout << "Vector: " << vec << endl;
    return 0;
}                            // 5 7 3 5 4 6
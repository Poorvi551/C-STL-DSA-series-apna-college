//Checks whether the vector is empty!!
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,5,7,8,9,2,3,5,4,6};
    vec.clear();                // Deletes the whole vector
    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;
    cout << "Is Vector Empty?: " << vec.empty() << endl;     //1 -> True   and 0 -> False       
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={5,6,7,8,9};
    vector<int>::iterator it;      //Initialize iterator
    for(it=vec.begin();it!=vec.end();it++){
        cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,5,7,8,9,2,3,5,4,6};
    cout << "vec.begin:" << *(vec.begin()) << endl;
    cout << "vec.begin:" << *(vec.end()-1) << endl;
    cout << "vec.begin:" << *(vec.end()) << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    pair<int,pair<int,int>>p={1,{6,5}};    // Intitialize pair
    cout << p.first << endl;   //Accessing first element in pair
    cout << p.second.first << endl;  //Accessing first element inside second pair
    cout << p.second.second << endl;  //Accessing second element inside second pair
    return 0;
}
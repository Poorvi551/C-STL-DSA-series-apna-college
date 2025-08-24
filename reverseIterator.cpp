#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={5,6,7,8,9};
    vector<int>::reverse_iterator rit;      //Initialize reverse iterator
    for(rit=vec.rbegin(); rit!=vec.rend(); rit++){
        cout << *(rit) << " ";
    }
    cout << endl;
    return 0;
}


                    //OR (Shortcut method)

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec={5,6,7,8,9};
//      //Initialize reverse iterator
//     for(vector<int>::reverse_iterator rit=vec.rbegin(); rit!=vec.rend(); rit++){
//         cout << *(rit) << " ";
//     }
//     cout << endl;
//     return 0;
// }


                      //OR (Shortcut method)

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec={5,6,7,8,9};
//      //Initialize reverse iterator
//     for(auto rit=vec.rbegin(); rit!=vec.rend(); rit++){
//         cout << *(rit) << " ";
//     }
//     cout << endl;
//     return 0;
// }
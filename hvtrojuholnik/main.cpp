#include <iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    for (int i = 0; i < r; ++i) {
        for (int j = 1; j<=r-i; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
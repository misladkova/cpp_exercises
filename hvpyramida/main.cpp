#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j<n-i; ++j) {
            cout << " ";
        }
        for (int k = 1; k<=1+2*i; ++k) {
            cout<<"*";
        }
        for (int m = 1; m <n-i ; ++m) {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n, c;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        c=a[n-1-i];
        cout<<c<<endl;
    }
    return 0;
}
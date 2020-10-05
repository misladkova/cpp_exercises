#include <iostream>
using namespace std;

int main(){
    int n, c;
    cin>>n;
    int a[n];
    for (int i = 0; i<n ; ++i) {
        cin >> a[i];
        if (i == n - 1) {
            cout << a[i] << endl;
        }
        else{
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            c = a[j]+a[j+1];
            if(j==n-i-2) {
                cout << c << endl;
            }
            else{
                cout<<c<<" ";
            }
            a[j]=c;
        }
    }
    return 0;
}
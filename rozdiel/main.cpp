#include <iostream>
using namespace std;

int main(){
    int n, x, b=0;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i<n ; ++i) {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i] - a[j] == x) {
                b+=1;
            }
        }
    }
    if (b>0) {
        cout << "ano" << endl;
    }
    else{
        cout<<"nie"<<endl;
    }
    return 0;
}
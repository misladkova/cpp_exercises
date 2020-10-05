#include <iostream>
using namespace std;

int main() {
    int n, a=0, j;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>j;
        if(j>a){
            a=j;
        }
    }
    cout<<a<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, a=10000, j, b;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>j;
        if(j<a){
            a=j;
            b=0;
        }
        if(j==a){
            b+=1;
        }
    }
    cout<<b<<endl;
    return 0;
}
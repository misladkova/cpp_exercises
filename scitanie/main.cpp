#include <iostream>
using namespace std;

int main() {
    int n, i, j, x=0;
    cin>>n;
    for(i = 1; i <= n; i++){
        cin>>j;
        x += j;
        if(x>=0) {
            cout << x << endl;
        }
        if (x<0){
            break;
        }
    }
    return 0;
}
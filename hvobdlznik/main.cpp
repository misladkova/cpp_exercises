#include <iostream>
using namespace std;

int main(){
    int r, s;
    cin>>r>>s;
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= s; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
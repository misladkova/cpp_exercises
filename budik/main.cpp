#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin>> h >> m;
    if(h==1 && m==1){
        cout<< "Je "<< h <<" hodina a "<<m<<" minuta." <<endl;
    }
    if(h==1 && (m<=4 && m>=2)){
        cout<< "Je "<< h <<" hodina a "<<m<<" minuty." <<endl;
    }
    if(h==1 && (m==0 || m>=5 && m<=59)){
        cout<< "Je "<< h <<" hodina a "<<m<<" minut." <<endl;
    }
    if(h>=2 && h<=4){
        cout<< "Su "<< h <<" hodiny a ";
        if(m==1){
            cout<< m <<" minuta."<<endl;
        }
        if(m>=2 && m<=4){
            cout<< m <<" minuty."<<endl;
        }
        if(m==0 || m>=5 && m<=59){
            cout<< m <<" minut."<<endl;
        }
    }
    if(h==0 || h>=5 && h<=23){
        cout<<"Je "<< h <<" hodin a ";
        if(m==1){
            cout<< m <<" minuta."<<endl;
        }
        if(m>=2 && m<=4){
            cout<< m <<" minuty."<<endl;
        }
        if(m==0 || m>=5 && m<=59){
            cout<< m <<" minut."<<endl;
        }
    }
    return 0;
}
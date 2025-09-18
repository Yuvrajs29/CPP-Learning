#include<iostream>
using namespace std;
void print1(int n){
    char alphabet = 'A';
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<alphabet<<" ";
            alphabet+=1;

        }
        cout<< endl;
    }
}
int main(){
    int n;
    cin>> n;
    print1(n);
    return 0;
}


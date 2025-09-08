#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        //space 
        for(int j=0;j<i*2;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space 
        for(int j=1;j<=2*n-2*i;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    print1(n);
    return 0;
}
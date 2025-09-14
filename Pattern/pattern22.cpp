#include<iostream>
using namespace std;
void print22(int n){
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<2*n-2*i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";  
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        //star
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<2*i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    print22(n);
    return 0;
}
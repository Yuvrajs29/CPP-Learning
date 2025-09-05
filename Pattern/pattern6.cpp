#include<iostream>
using namespace std;
void printf(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<i;
        }
    cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printf(n);
    return 0;
}
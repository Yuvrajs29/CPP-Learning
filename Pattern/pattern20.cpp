#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+ (n-1)-i;
        for(char ch = 'A'+(n-1)-i;ch<='A'+(n-1);ch++){
            cout<<ch<<" ";
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
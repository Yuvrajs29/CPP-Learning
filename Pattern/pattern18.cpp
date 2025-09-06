#include<iostream>
using namespace std;
void print1(int n){
    for(char ch='A';ch<='A'+n;ch++){
        for(int j='A';j<=ch ; j++){
            cout<<ch;
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
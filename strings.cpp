#include<iostream>
using namespace std;
int main(){
    string s = "BATMANCAVE";
    int len = s.size();
    s[4]='a';
    cout<< s[2]<<"\n";
    cout<< len<<"\n";
    cout<< s[len-1];
    cout<< s[4];
    return 0;
}
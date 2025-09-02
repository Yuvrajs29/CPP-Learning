#include<iostream>
using namespace std;
// pass by reference (it goes to address )
void doSomething(string &s){
    s[0] = 't';
    cout<< s<< endl;
}
int main(){
    string s ="raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if (age<18){
        cout<<"Not eligible for JOB";
    }
    else if( age<=54){
        cout<<"You are eligible ";
    }
    else if(age<=57){
        cout<<"eligible for job but retirement soon.";
    }
    else {
        cout<<"retirement time";
    }
    return 0;
}
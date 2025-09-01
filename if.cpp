#include<iostream>
using namespace std;
//WAP that takes an input of age 
//and prints if you are an adult or not
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult";
    }
    else{
        cout<<"You are not an adult";
    }
    return 0;
}
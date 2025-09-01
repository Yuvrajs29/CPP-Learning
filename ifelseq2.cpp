#include<iostream>
using namespace std;
/*
Take the age from the user and then decide accordingly
1. If age < 18 ,
print -> not eligible for job 
2. If age >= 18 ,age <=54
print ->  eligible for job 
3. if age >= 55 and age <= 57 , 
print -> "eligible for job , but retirement soon"
4. If age > 57 
print -> "retirement time "
*/
int main(){
    int age;
    cin>> age;
    if(age<18){
        cout<<"You are not eligible";
    }
    else if(age<=57){
        cout<<"You are eligible for job";
        if(age>=55){
            cout<<",but retirement soon";
        }
    }
    else if(age>57){
        cout<<"Retirement";
    }
    return 0;
}
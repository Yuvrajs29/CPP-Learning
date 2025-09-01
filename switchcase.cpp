#include<iostream>
using namespace std;
/*
Take the day no. and print the corresponding day 
for 1. print Monday,
for 2. print Tuesday and so on for 7 print Sunday
*/
int main(){
    int day;
    cin>>day;
    switch(day){
        case 1:
            cout<<"its Monday";
            break;
        case 2:
            cout<<"its Tuesday";
            break;
        case 3:
            cout<<"its Wednesday";
            break;
        case 4:
            cout<<"its Thursday";
            break;
        case 5:
            cout<<"its Friday";
            break;
        case 6:
            cout<<"its Saturday";
            break;
        case 7:
            cout<<"its Sunday"; 
            break;
        default:
            cout<<"INvalid";              
    }
    cout<<" Check";
    return 0;
}
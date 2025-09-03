#include<iostream>
using namespace std;
//Patterns rules ;
//1. for the outer loop  ,count the number of lines
//2. for the inner loop ,focus on the columns 
//& connect them somehow to the rows
//3. print them '*' inside the inner for loop
//4. observe symmetry [optional]  
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n ;i++){
        for(int j=0; j<n;j++){
            cout<<"*";
        }
    cout<<endl;
    }
    return 0;
}
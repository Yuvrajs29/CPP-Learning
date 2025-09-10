#include<iostream>
using namespace std;
void explainMap(){
    map<int , int> mpp;
    map<int , pair<int,int>> mpp;
    map<pair<int,int>,int> mpp;

    mpp[1]=2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp[{2,3}] = 10;

    for(auto it : mpp){
        cout << it.first <<" "<< it.second << endl;

    }
    cout<< mpp[1];
    cout<<mpp[5];
     auto it = mpp.find(3);
     cout<< *(it).second;

     auto it = mpp.find(5);
     // this is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upeer_bound(3);
    // erase , swap , size , empty are same as above




}





void explainMultimap() {
    // everything smae as map , only it can store multiple keys 
    // only mpp[key] cannot be used here

}

void explainUnorderedMap() {
    //same as set and unordered_Set differences
     
}


bool comp(pair<int,int>p1, pair<int,int>p2) {
    if(p1.second < p2.second){
        return true;   
    } else if(p1.second == p2.second){
        if(p1.first>p2.second) return true;

    }
    return false;
}
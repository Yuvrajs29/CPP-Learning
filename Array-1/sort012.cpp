#include<bits/stdc++.h>
using namespace std;

void swap(vector<int> &nums,int i,int j){
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void sort(vector<int> &nums){
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    for(int i=0;i<n;i++){
        if(nums[mid]==0){
            swap(nums,low,mid);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums,mid,high);
            high--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i];
    }
    return 0;
}
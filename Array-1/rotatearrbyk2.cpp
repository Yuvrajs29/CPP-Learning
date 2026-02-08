#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotateByK(int arr[], int n, int k){
    k = k % n;               // important if k > n

    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);
}

int main(){
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    rotateByK(arr, n, k);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}
 
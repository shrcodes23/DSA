#include <bits/stdc++.h>
using namespace std;
int binarysort(int arr[],int n, int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) low=mid+1;
        else high=mid-1; 
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
    int ans=binarysort(arr.data(),n, target);
    cout<<ans<<"";

}
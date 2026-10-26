#include<bits/stdc++.h>
using namespace std;
vector<int> runSum(vector<int>nums){
    int sum=0;
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        ans.push_back(sum);
    }
    return ans;


}
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans=runSum(nums);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}


#include <bits/stdc++.h>
using namespace std;
// First line will contain T, number of testcases. Then the testcases follow.
// The first line in each testcase contains one integer, N.
// The following line contains N space separated integers: the height of each mountains.
int main() {
	int T;
	cin>>T;
	while(T--){ // remember
	    int N;
	    cin>>N;
    	vector<int>arr(N); // remember
    	for(int i=0;i<N;i++){
    	    cin>>arr[i];
    	}
    	int maxi=INT_MIN;
    	for(int i=0;i<N;i++){
    	    maxi=max(maxi,arr[i]);
    	}
    	cout<<maxi<<" ";
	}

}

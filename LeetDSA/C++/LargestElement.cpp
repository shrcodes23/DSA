#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr, int n) {

    int s = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] > s) {
            s = arr[i];
        }
    }

    return s;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = largestElement(arr, n);

    cout << ans;
}
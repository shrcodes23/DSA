#include <bits/stdc++.h>
using namespace std;

int SecondL(vector<int>& arr, int n) {
    int largest = INT_MIN;
    int secondl = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            //remember
            secondl = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondl && arr[i] != largest) {
            secondl = arr[i];
        }
    }
    if(secondl == INT_MIN) {
        return -1;
    }
    return secondl;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n); //or arr[0] but arr(n) isn't a thing
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = SecondL(arr, n);
    cout << ans << endl;
}
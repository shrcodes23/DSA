#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // =========================
    // 1. BRUTE FORCE - O(n²)
    // =========================

    for (int i = 0; i < n; i++) {
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                cnt++;
            }
        }

        if (cnt > n / 2) {
            cout << "Brute Force: " << nums[i] << endl;
            break;
        }
    }


    // =========================
    // 2. MAP - O(n log n)
    // =========================

    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[nums[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > n / 2) {
            cout << "Map: " << it.first << endl;
            break;
        }
    }


    // =========================
    // 3. BOYER-MOORE - O(n)
    // =========================

    int el;
    int cnt = 0;

    // Find candidate
    for (int i = 0; i < n; i++) {

        if (cnt == 0) {
            cnt = 1;
            el = nums[i];
        }
        else if (nums[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }

    // Verify candidate
    int cnt1 = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == el) {
            cnt1++;
        }
    }

    if (cnt1 > n / 2) {
        cout << "Boyer-Moore: " << el << endl;
    }

    return 0;
}
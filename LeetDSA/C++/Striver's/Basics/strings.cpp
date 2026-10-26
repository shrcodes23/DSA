//palindrome
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isAlphaNumeric(char ch){
        return (ch>='a' && ch<='z')||
        (ch>='A' && ch<='Z')||
        (ch>='0' && ch<='9');

    }
    char toLowerChar(char ch){
        if(ch>='A' && ch<='Z'){
            return char(ch+32);
        }
        return ch;

    }
    bool  palindromeCheck(string &s){
        // string cleaned="";
        // for(char ch:s){
        //     if(isAlphaNumeric(ch)){
        //         cleaned+=toLowerChar(ch);
        //     }
        // }
        // // Brute-
        // // string reversed=cleaned;
        // // reverse(reversed.begin(),reversed.end());
        // // return cleaned==reversed;
        // // Better-
        int n=s.size();
        int left=0;
        int right=n-1;
        // while(left<right){
        //     if(cleaned[left]!=cleaned[right]){
        //         return false;
        //     }
        //     left++;
        //     right--;
        // }
        // return true;
        // Optimized-
        while(left<right){
            while(left<right && !isAlphaNumeric(s[left])){
                left++;

            }
            while(left<right && !isAlphaNumeric(s[right])){
                right--;

            }
            if(toLowerChar(s[left])!=toLowerChar(s[right])){
                return false;

            }
            left++;
            right--;
        }
        return true;

    }

};
int main() {
    string s;
    getline(cin, s);

    Solution obj;

    if (obj.palindromeCheck(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

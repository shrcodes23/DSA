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
        string cleaned="";
        for(char ch:s){
            if(isAlphaNumeric(ch)){
                cleaned+=toLowerChar(ch);
            }
        }
        string reversed=cleaned;
        reverse(reversed.begin(),reversed.end());
        return cleaned==reversed;
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

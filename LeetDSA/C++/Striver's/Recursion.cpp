/*#include <bits/stdc++.h>
using namespace std;

void func(int count) {
    if (count == 3) {
        return;
    }
    cout << count << " ";
    func(count + 1);
}

int main() {
    func(0);
    return 0;
}
*/
//1. basic recursion problem 
/*#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) {
    if (i>n) return;       // base case to stop recursion
    cout << "Shreya" << endl; // print name
    name(i+1, n);              // recursive call with decremented n
}

int main() {
    int n;
    cin >> n;                 // take input from user  
    name(1, n);                  // call function with input
    return 0;
}*/
//----------------------------------

//2.
/*void num(int i, int n) {
    if (i > n) return;   // base condition
    cout << i << " ";    // print number
    num(i + 1, n);       // recursive call with updated i
}

int main() {
    int n;
    cin >> n;            // take input from user  
    num(1, n);           // pass n as argument
    return 0;
}
*/



/*void num(int i, int n) {
    if (i < 1) return;   // base condition
    cout << i << " ";    // print number
    num(i-1, n);       // recursive call with updated i
}

int main() {
    int n;
    cin >> n;            // take input from user  
    num(n, n);           // pass n as argument
    return 0;
}*/



/*void num(int i, int n) {
    if (i < 1) return;   // base condition
    num(i-1, n);       // recursive call with updated i
    cout << i << " ";    // print number
}

int main() {
    int n;
    cin >> n;            // take input from user  
    num(n, n);           // pass n as argument
    return 0;
}*/



/*void num(int i, int n) {
    if (i > n) return;
    num(i+1, n);
    cout << i << " ";
}

int main() {
    int n;
    cin >> n;
    num(1, n);
    return 0;
}
*/

//functional recursion
#include <bits/stdc++.h>
using namespace std;
/*int sum(int n){
    if (n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;

}
*/

//factorial of n numbers

/*int fac(int n){
    if (n==0) return 1;
    return n*fac(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fac(n);
    return 0;

}

*/



/*int fac(int i,int m){
    if (i<1)
    {
    cout<<m;
    return 1;
    }
    fac(i-1,m*i);
    return 0;

}
int main(){
    int n;
    cin>>n;
    fac(n,1);
}*/



/*
//reverse an array

//using 2 pointers
void reverse(int start, int arr[],int end){
    if (start>=end) return;
    swap(arr[start],arr[end]);
    reverse(start+1,arr,end-1);
}
//using 1 pointer
void reverse1(int i,int arr[],int n){
    if (i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse1(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    reverse1(0,arr,n); // in 2 pointers case: use n-1 instead of n
    for (int i=0;i<n;i++) cout<<arr[i]<<" ";
}
*/



/*
bool palindrome(int i, string s, int n) {
    if (i >= n / 2) return true;
    if (s[i] != s[n - i - 1]) return false;
    return palindrome(i + 1, s, n);
}

int main() {
    string s;
    cin >> s;
    int n = s.length();
    cout << palindrome(0, s, n);
    return 0;
}
*/



int f(int n){
    if (n<=1) return n;
    int last=f(n-1);
    int slast=f(n-2);
    return last+slast;

}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
    return 0;

}
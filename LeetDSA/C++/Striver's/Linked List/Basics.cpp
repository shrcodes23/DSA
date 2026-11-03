#include<bits/stdc++.h>
using namespace std;
//struct don't give u oops benefits so always use class instead of struct
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
};
int main(){
    vector<int> arr={2, 5, 8, 7};
    //Node y= Node{arr [0], nullptr};
    //cout<<y.next;
    Node* y= new Node{arr [0], nullptr};
    cout<<y->data;
}
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    // multi-constructor:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;

    }
    //(1)
    Node(int data1) {
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2List(vector <int> &arr){
    Node* head= new Node(arr[0]); //1 needed for this
    Node* mover=head;
    for( int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}
int LengthOfLL(Node* head){
    int cnt=0;
    Node* temp=head;
    //same for traversal
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
    
}
int Search(Node*head, int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;

}
int main(){
    vector<int> arr={2, 5 ,8 ,10};
    Node* head=convertArr2List(arr);
    cout<<Search(head, 2);

}
// T(n)=> O(n)
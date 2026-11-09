#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* Arr2List(vector <int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* InsertionInHead(int el, Node* head){
    return new Node(el, head);


}
Node* InsertionInTail(int el, Node* head){
    if(head==nullptr){
        return new Node(el);
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* newNode=new Node(el);
    temp->next=newNode;
    return head;


}
void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }

}
int main(){
    vector <int> arr={2,3,4,5};
    int el;
    cin>>el;
    Node* head=Arr2List(arr);
    head=InsertionInHead(100, head);
    print(head);

}
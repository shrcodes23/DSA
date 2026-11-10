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
Node* InsertionAtHead(int el, Node* head){
    return new Node(el, head);


}
Node* InsertionAtTail(int el, Node* head){
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
Node* InsertionAtK(int el, Node* head, int k) {

    if(k == 1) {
        return new Node(el, head);
    }

    if(head == nullptr) {
        return nullptr;
    }

    Node* temp = head;
    int cnt = 1;

    while(temp != nullptr) {

        if(cnt == k-1) {
            Node* n = new Node(el, temp->next);
            temp->next = n;
            return head;
        }

        temp = temp->next;
        cnt++;
    }

    return head;
}

void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }

}
int main() {
    vector<int> arr = {2,3,4,5};

    int el, k;
    cin >> el >> k;

    Node* head = Arr2List(arr);

    head = InsertionAtK(el, head, k);

    print(head);
}
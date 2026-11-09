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


Node* deleteHead(Node* head){
    if(head==nullptr) return nullptr;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }

}
Node* deleteTail(Node* head){
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=nullptr;
    return head;
}
Node* removeK(Node* head, int k){
    if(head==nullptr) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=0;
    Node* prev=nullptr;
    Node* temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}
Node* removeEl(Node* head, int el){
    if(head==nullptr) return head;
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* prev=nullptr;
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==el){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;


}
int main(){
    vector<int> arr={2, 5 ,8 ,10};
    int el;
    cin>>el;
    Node* head=convertArr2List(arr);
    head=removeEl(head,5);
    print(head);

}
// T(n)=> O(n)
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if (age>=18){
        cout<<"You are an adult";
    }
    else if(age<18){
        cout<<"Your are not an adult";
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"You are not eligible for job";
    }
    else if(age<=57  ){
        cout<<"You are eligible for job";
        if (age>=54){
            cout<<", but retirement soon";
        }
    }
    else{
        cout<<"Retirement time";
    }
    return 0;
}
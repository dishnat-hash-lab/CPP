#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a,b;
    int* m;
    int* n;
    cout<<"Enter the variabls to swap:";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<"\t"<<b;
}
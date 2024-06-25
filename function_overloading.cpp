#include<iostream>
using namespace std;
void area(int);
void area(int,int);
int main(){
    area(20);
    area(20,30);
}
void area(int x){
    cout<<"\n Area of sqaure:"<<x*x;
}
void area(int x,int y){
    cout<<"\n Area of  rectangle:"<<x*y;
}
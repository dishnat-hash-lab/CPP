/*Wap to insert a new element into array*/

// #include<iostream>
// using namespace std;

// int main(){
//     int p,n,val;
//     cout<<"\nEnter the total number of elements:";
//     cin>>n;
//     int a[100];
//     cout<<"\ninput values:";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"\nOriginal array:";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"\t"<<a[i];
//     }
//     cout<<"\nEnter the position where u want to insert:";
//     cin>>p;
//     cout<<"\nEnter the value u want to insert:";
//     cin>>val;
//     for (int i = n-1; i >=p-1; i--)
//     {
//         a[i+1]=a[i];
//     }
//     a[p-1]=val;
//     cout<<"\nNew array:";
//     n++;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"\t"<<a[i];
//     }   

// }

/*WAP to delete element from array*/

#include<iostream>
using namespace std;

int main(){
    int p,n;
    cout<<"\nEnter the total number of elements:";
    cin>>n;
    int a[n];
    cout<<"\ninput values:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"\nOriginal array:";
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<"\nEnter the position where u want to delete:";
    cin>>p;
    for (int i = p-1; i <n ; i++)
    {
        a[i]=a[i+1];
    }
    cout<<"\nNew array:";
    n--;
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }   
}
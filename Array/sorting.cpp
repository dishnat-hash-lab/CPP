/*selection sort*/

// #include<iostream>
// using namespace std;

// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int n;
//     cout<<"\nEnter the size to array:";
//     cin>>n;

//     int a[n];
//     cout<<"\ninput values:";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(a[j]>a[i]){
//                 swap(a[i],a[j]);
//             }
//         }
//     }

//     cout<<"\nSorted array:";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<"  ";
//     }
    
// }

/*Bubble sort*/
#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int n;
    cout<<"\nEnter the size to array:";
    cin>>n;

    int a[n];
    cout<<"\ninput values:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n;i++ )
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    cout<<"\nSorted array:";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    
} 
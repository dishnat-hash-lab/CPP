/*Array of strings*/

//searching
// #include<iostream>
// using namespace std;
// #include<cstring>

// int main(){
//     int n,flag=0,d;
//     cout<<"\nEnter total number of entries:";
//     cin>>n;
//     char str[n][20];
//     cout<<"Enter Name's:";
//     for (int i = 0; i < n; i++)
//     {
//         gets(str[i]);
//     }
    
//     char name[20];
//     cout<<"Input Your name:";
//     gets(name);
//     for (int i = 0; i < n; i++)
//     {
//         d=strcmp(name,str[i]);
//         if(d==0){
//             cout<<"WELCOME SIR";
//             flag=1;
//         }
//     }

//     if(flag==0){
//         cout<<"Who r u?";
//     }
// }

//selection sort 

#include<iostream>
using namespace std;
#include<string>

int main(){
    int n,d;
    cout<<"Input total number of entries:";
    cin>>n;
    string str[n],temp;
    for (int i = 0; i < n; i++)
    {
        getline(cin,str[i]);
    }
    
    cout<<"\nOriginal list:";
    for (int i = 0; i <n; i++)
    {
        cout<<str[i]<<endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            d=str[i].compare(str[j]);
            if(d<0){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }

    cout<<"\nSorted list:";
    for (int i = 0; i < n; i++)
    {
        cout<<str[i]<<endl;
    }
    
}
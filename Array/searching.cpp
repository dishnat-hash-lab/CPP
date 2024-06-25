/*linear search*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n,sr;
//     cout<<"\nEnter the size to array:";
//     cin>>n;
//     int a[n];
//     cout<<"\ninput values:";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"\nEnter the value you want to search on array:";
//     cin>>sr;

//     for (int i = 0; i < n; i++)
//     {
//         if(a[i]==sr){
//             cout<<"value is present at postion"<<i+1;
//             break;
//         }
//         else if(i==n-1 && a[i]!= sr){
//             cout<<"NO such value is present in the array";
//         }
//     }
// }

/*Find the second and first biggest number in array:*/

// #include<iostream>
// using namespace std;

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
//     int big=a[0];
//     int sec_big=a[1];
    
//     for (int i = 0; i < n; i++)
//     {
//         if(a[i]>big){
//             big=a[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//      if(a[i]<big && a[i]>sec_big){
//             sec_big=a[i];
//         }
//     }
    
//     cout<<"\nhighest number in array: "<<big;
//     cout<<"\nSecond highest number in array: "<<sec_big;
// }
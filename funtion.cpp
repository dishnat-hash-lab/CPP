/*Defaukt para meters*/
// #include<iostream>
// using namespace std;

// void simple_intrest(int p,int r,int t=3){
//     int si=p*r*t/100;
//     cout<<"\n SIMPLE INTREST:"<<si;
// }
// int main(){
//     simple_intrest(3000,4);
//     simple_intrest(3000,4,4);
// }


/*inline funtion*/

// #include<iostream>
// using namespace std;

// void inline square(int x){
//     cout<<"\nArea of sqaure:"<<x*x;
// }
// int main(){
//     square(7);
//     square(11);
// }

/*function*/

// #include<iostream>
// using namespace std;

// float fact(int);

// int main(){
//     int n,f;
//     float sum=0;
//     cout<<"Enter the length of series:";
//     cin>>n;
//     for(int i=1;i<= n;i++){
//         sum=sum+(i/fact(i));
//     }
//     cout<<"sum of the series 1/1! + 2/2! + ... + n/n!: "<<sum;
// }
// float fact(int x){
//     float f=1;
//     for(int i=x;i>=1;i--){
//         f=f*i;
//     }
//     return (f);
// }

/*RECURSIVE FUNCTION*/

// #include<iostream>
// using namespace std;

// int fact(int x){
//     if(x==0){
//         return 1;
//     }
//     else{
//         return x*fact(x-1);
//     }
// }
// int main(){
//     int f,n;
//     cout<<"Enter the length of series:";
//     cin>>n;
//     f=fact(n);
//     cout<<"Factorinal: "<<f;
// }


// #include<iostream>
// using namespace std;
// float pow(int x,int y){
//     if(y==0){
//         return 1;
//     }
//     return (x+1/100)*pow(x,y-1);
// }
// int main(){
//     int p,r,t;
//     float ci;
//     cout<<"Enter the value of P,R,T: ";
//     cin>>p>>r>>t;
//     ci=(p*pow(r,t))-p;
//     cout<<"Compound Intrest:"<<ci;
// }

/*Fiboncci series using recursive function*/

// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }

//     else{
//         return fib(n-1) + fib(n-2);
//     }
// }

// int main(){
//     int n;
//     cout<<"\nEnter the length of series:";
//     cin>>n;
//     for (int i = 0; i <= n; i++)
//     {
//         cout<<fib(i);
//     }
    
// }
/*default constructor*/

// #include<iostream>
// using namespace std;

// class counter{
//     int count;
//     public:
//     counter(){
//         count=0;
//     }
//     void inc_count(){
//         count++;
//     }
//     void show_count(){
//         cout<<"\nNumber of student enrolled:"<<count;
//     }
// };

// int main(){
//     int c1,c2;
//     char choice;
//     counter cs1,cs2;
//     do{
//         cout<<"\nNumber of new student enrolled(CS1):";
//         cin>>c1;
//         for (int i = 0; i <c1 ; i++)
//         {
//             cs1.inc_count();
//         }
//         cout<<"\nNumber of new student enrolled(CS2):";
//         cin>>c2;
//         for (int i = 0; i < c2 ; i++)
//         {
//             cs2.inc_count();
//         }
//       cout<<"\nDo you want to continue:(y/n)" ;
//       cin>>choice;
//         cs1.show_count();
//         cs2.show_count();
//     }while (choice=='y');

// }

/*Parameterized constructor*/

// #include<iostream>
// using namespace std;

// class counter{
//     int count;
//     public:
//     counter(int c){
//         count=c;
//     }
//     void inc_count(){
//         count++;
//     }
//     void show_count(){
//         cout<<"\nNumber of student enrolled:"<<count;
//     }
// };

// int main(){
//     counter cs1(2),cs2(4);
//     int c1,c2;
//     char choice;
//     do{
//         cout<<"\nNumber of new student enrolled(CS1):";
//         cin>>c1;
//         for (int i = 0; i <c1 ; i++)
//         {
//             cs1.inc_count();
//         }
//         cout<<"\nNumber of new student enrolled(CS2):";
//         cin>>c2;
//         for (int i = 0; i < c2 ; i++)
//         {
//             cs2.inc_count();
//         }
//       cout<<"\nDo you want to continue:(y/n)" ;
//       cin>>choice;
//         cs1.show_count();
//         cs2.show_count();
//     }while (choice=='y');
// }


/*copy constructor*/

// #include<iostream>
// using namespace std;

// class counter{
//     int count;
//     public:
//     counter(int c){
//         count=c;
//     }
//     counter(counter &x){
//         count=x.count;
//     }
//     void show_count(){
//         cout<<"\nNumber of students enrolled is given course:"<<count;
//     }
//     void inc_count(){
//         count++;
//     }
// };

// int main(){
//     counter cs1(100),cs2(cs1);
//     int c1,c2;
//     char choice;
//     do{
//         cout<<"\nNumber of new student enrolled(CS1):";
//         cin>>c1;
//         for (int i = 0; i <c1 ; i++)
//         {
//             cs1.inc_count();
//         }
//         cout<<"\nNumber of new student enrolled(CS2):";
//         cin>>c2;
//         for (int i = 0; i < c2 ; i++)
//         {
//             cs2.inc_count();
//         }
//       cout<<"\nDo you want to continue:(y/n)" ;
//       cin>>choice;
//         cs1.show_count();
//         cs2.show_count();
//     }while (choice=='y');
// }

/*constructor with defualt parameter:*/

#include<iostream>
#include <string.h>
using namespace std;

class student{
    char name[20];
    int rollno;
    int fee;
    public:
    student(char x[],int y,int z=30000){
        strcpy(name,x);
        rollno=y;
        fee=z;
    }

    void show_stu(){
        cout<<"\nStudent details:";
        cout<<"\nName:"<<name;
        cout<<"\nRollno:"<<rollno;
        cout<<"\nFee:"<<fee;
    }
};

int main(){
    student s1("dishant",19);
    student s2("rahul",18,20000);
    s1.show_stu();
    s2.show_stu();
}
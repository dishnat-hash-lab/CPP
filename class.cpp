//member funtion defination inside the class
// #include<iostream>
// #include<string.h>
// using namespace std;
// class student{
//     char *name;
//     int length;
//     int age;
//     int rollno;
//     public:
//     student(){
//         length=0;
//         name = new char[length+1];
//     }
//     void get_stu(char *s){
//         cout<<"Enter student details:";
//         cout<<"\nRoll No.:";
//         cin>>rollno;
//         cout<<"\nAge:";
//         cin>>age;
//         length=strlen(s);
//         name = new char[length+1];
//         strcpy(name,s);
//     }
//     void show_stu(){
//         cout<<"\nName:"<<name;
//         cout<<"\nRollNo.:"<<rollno;
//         cout<<"\nAge:"<<age;
//     }

// };

// int main(){
//     student s1;
//     s1.get_stu("dishant");
//     s1.show_stu();
// }

/*member function defination outside the class*/

// #include<iostream>
// using namespace std;

// class measure{
//     int feet;
//     int inches;
//     public:
//     void get_measure();
//     void show_measure();
// };

// void measure::get_measure(){
//     cout<<"Enter the measurement:";
//     cout<<"\nFeet:";
//     cin>>feet;
//     cout<<"\nInches:";
//     cin>>inches;
// }

// void measure::show_measure(){
//     cout<<"\nMeasure:"<<feet<<"'"<<inches<<"\"";
// }

// int main(){
//     measure m;
//     m.get_measure();
//     m.show_measure();
// }

/*Array of objects*/

// #include<iostream>
// using namespace std;
// class time{
//     int hrs;
//     int mins;
//     int secs;
//     public:
//     void get_time(){
//         cout<<"Enter tym details(in hr:min:sec format):";
//         cin>>hrs>>mins>>secs;
//     }

//     void show_time(){
//         cout<<"\nTime:"<<hrs<<":"<<mins<<":"<<secs;
//     }
// };

// int main(){
//     time t[20];
//     int n;
//     cout<<"Enter the nuber of ym details u want to enter :";
//     cin>>n;
//     for(int i =1;i<=n;i++){
//         t[i].get_time();
//     }
//     for(int i =1;i<=n;i++){
//         t[i].show_time();
//     }
// }
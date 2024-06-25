#include<iostream>
using namespace std;

class counter{
    int count;
    public:
    counter(int c){
        count=c;
    }
    counter(counter &x){
        count=x.count;
    }
    void show_count(){
        cout<<"\nNumber of students enrolled is given course:"<<count;
    }
    void inc_count(){
        count++;
    }
};

int main(){
    counter cs1(100),cs2(cs1);
    int c1,c2;
    char choice;
    do{
        cout<<"\nNumber of new student enrolled(CS1):";
        cin>>c1;
        for (int i = 0; i <c1 ; i++)
        {
            cs1.inc_count();
        }
        cout<<"\nNumber of new student enrolled(CS2):";
        cin>>c2;
        for (int i = 0; i < c2 ; i++)
        {
            cs2.inc_count();
        }
      cout<<"\nDo you want to continue:(y/n)" ;
      cin>>choice;
        cs1.show_count();
        cs2.show_count();
    }while (choice=='y');
}
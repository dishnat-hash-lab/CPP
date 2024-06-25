//conversion from basic type to class type 
// #include<iostream>
// using namespace std;
// class time{
//     int hrs;
//     int min;
//     public:
//     time(){
//         hrs=0;
//         min=0;
//     }
//     time(int x){
//         hrs=x/60;
//         min=x%60;
//     }
//     void show_time(){
//         cout<<"Time:"<<hrs<<":"<<min;
//     }
// };
// int main(){
//     int x=170;
//     time t;
//     t=x;
//     t.show_time();
// }

//conversion from class type to basic

// #include<iostream>
// using namespace std;
// class time{
//     int hrs;
//     int min;
//     public:
//     time(int x,int y){
//         hrs=x;
//         min=y;
//     }
//     operator int(){
//         int x;
//         x=hrs*60+min;
//         return x;
//     }
// };
// int main(){
//     time t(2,50);
//     int x=int(t);
//     cout<<"time:"<<x;
// }

//converstion from one class to another class

#include<iostream>
using namespace std;
class rupee;
class dollar{
    int dlr;
    public:
    dollar(){
        dlr=0;
    }
    dollar(int d){
        dlr=d;
    }
    int get_dlr(){
        return dlr;
    }
    dollar(rupee r){
        dlr=r.get_rpe()/80;
    }
    void show_dlr(){
        cout<<"\nAmount in dollar:$"<<dlr;
    }
};

class rupee{
    int rpe;
    public:
    rupee(){
        rpe=0;
    }
    rupee(int r){
        rpe=r;
    }
    int get_rpe(){
        return rpe;
    }
    rupee(dollar d){
        rpe=d.get_dlr()*80;
    }
    void show_rpe(){
        cout<<"\nAmount in rupee:"<<rpe;
    }
};

int main(){
    dollar d1(23);
    rupee r1;
    r1=d1;
    r1.show_rpe();
}
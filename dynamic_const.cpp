#include<iostream>
#include <string.h>

using namespace std;

class strin{
    char *name;
    int length;
    public:
    strin(){
        length=0;
        name=new char[length+1];
    }
    strin(char *s){
        this->length=strlen(s);
        this->name=new char[length+1];
        strcpy(this->name,s);
    }
    void join(strin &x,strin &y){
        length = x.length + y.length;
        delete name;
        name=new char[length+1];
        strcpy(name,x.name);
        strcat(name,y.name);
    }
    void display(){
        cout<<"NAME:"<<name;
    }
};
int main(){
    strin s1("Dishant ");
    strin s2("Saini");
    strin s3;
    s3.join(s1,s2);
    s3.display();
}
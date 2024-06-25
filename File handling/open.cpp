/*opening file using constructor*/

// #include<iostream>
// using namespace std;
// #include<fstream>

// int main(){
//     ofstream fout("mydata.txt");
//     char name[20];
//     int cost;
//     cout<<"Enter item name:";
//     cin>>name;
//     cout<<"Enter item cost:";
//     cin>>cost;
//     fout<<name<<endl;
//     fout<<cost<<endl;
// }

/*Display data from file to screen*/
// #include<iostream>
// using namespace std;
// #include<fstream>

// int main(){
//     ifstream fin("mydata.txt");
//     char name[20];
//     int cost;
//     fin>>name;
//     fin>>cost;
//     cout<<"\n item name:"<<name;
//     cout<<"\n item cost:"<<cost;
// }

/*Using member function open()*/

// #include<iostream>
// using namespace std;
// #include<fstream>

// int main(){
//     ofstream fout;
//     fout.open("country.txt");
//     fout<<"INDIA"<<endl;
//     fout<<"CHINA"<<endl;
//     fout<<"PAKISHTAN"<<endl;
//     fout<<"SHRI LANKA"<<endl;
//     fout.close();
//     fout.open("capital.txt");
//     fout<<"NEW DELHI"<<endl;
//     fout<<"BEGING"<<endl;
//     fout<<"ISLAMABAD"<<endl;
//     fout<<"COLOMBO"<<endl;
//     fout.close();
// }

/*getline() function*/
#include<iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream finco,fincp;
    char line1[80];
    char line2[80];
    finco.open("country.txt");
    fincp.open("capital.txt");
    cout<<"Data of country file:"<<endl;
    while(finco && fincp){
        finco.getline(line1,80);
        fincp.getline(line2,80);
        cout<<line2<<" is capital of "<<line1<<endl;
    }
    finco.close();
    fincp.close();
}

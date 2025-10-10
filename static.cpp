#include<iostream>
using namespace std;
class Vehicle{
    public:
    int vehno;
    string vehn;
    static string brand;
    static int count;
    Vehicle(){
        cout<<"vehicle added sucessfully: "<<endl;
        count++;
    }
    void insert(int id, string Name){
    vehno=id;
    vehn=Name;
    }
    void display(){
        cout<<"vehicle Name : "<<vehn<<endl;
        cout<<"vehicle id: "<<vehno<<endl;
    }
};
string Vehicle::brand="Mahindra";
int Vehicle::count=0;
int main(){
    Vehicle v1;
    v1.insert(211,"Thar");

    Vehicle v2;
    v2.insert(2211,"Scorpio n");

    Vehicle v3;
    v3.insert(1122,"Roxx");

    Vehicle v4;
    v4.insert(1212,"Scorpio S11");

    v1.display();
    v2.display();
    v3.display();
    v4.display();

    cout<<"Number of Vehicles Registered: "<<Vehicle::count<<endl;
}

#include<bits/stdc++.h>
using namespace std;

class Flight{
private:

    int flight_number;
    string destination;
    float distance;

public:

    int CalFuel(){
        if(distance <= 1000) return 500;
        else if(distance>1000 && distance<=2000) return 1100;
        else return 2200;
    }
    void FeedInfo(int flight_number, string destination, float distance){
        this->flight_number = flight_number;
        this->destination = destination;
        this->distance = distance;
    }
    void ShowInfo(){
        cout<<"Flight number: "<<flight_number<<endl;
        cout<<"Destination: "<<destination<<endl;
        cout<<"Distance: "<<distance<<endl;
    }

};

int main(){
    Flight f1;
    f1.FeedInfo(1, "Dhaka", 5000);
    int fuel = f1.CalFuel();
    cout<<"Fuel: "<<fuel<<endl;
    f1.ShowInfo();

}
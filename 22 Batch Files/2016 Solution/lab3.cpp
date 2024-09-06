#include<bits/stdc++.h>
using namespace std;

class Calculator{
    private:
    int val;
    public:
    Calculator(){
        val = 0;
    }
    Calculator(int value){
        val = value;
    }
    int getValue(){
        return val;
    }

    void setValue(int value){
        val = value;
    }
    void add(int value){
        val += value;
    }
    void subtract(int value){
        val -= value;
    }

    void multiply(int value){
        val *= value;
    }

    void divide(int value){
        val /= value;
    }

    void clear(){
        val = 0;
    }
};

int main(){
    Calculator c1;
    c1.add(10);
    cout<<"Calculator Display: "<<c1.getValue()<<endl;
    c1.add(7);
    cout<<"Calculator Display: "<<c1.getValue()<<endl;
    c1.multiply(31);
    cout<<"Calculator Display: "<<c1.getValue()<<endl;
    c1.subtract(42);
    cout<<"Calculator Display: "<<c1.getValue()<<endl;
    c1.divide(7);
    cout<<"Calculator Display: "<<c1.getValue()<<endl;
    c1.add(3);
    cout<<"Calculator Display: "<<c1.getValue()<<endl;
    c1.subtract(1);
    cout<<"Calculator Display: "<<c1.getValue()<<endl;  
    c1.clear();
    cout<<"Calculator Display: "<<c1.getValue()<<endl;


}
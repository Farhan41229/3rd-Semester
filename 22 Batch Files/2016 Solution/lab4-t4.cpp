#include<bits/stdc++.h>
using namespace std;

class SavingsAccount{
    private:
     int annualInterestRate;
    int savingsBalance;
    public:
    void calculateMonthlyInterest(){
        int interest  = (savingsBalance * annualInterestRate)/12;
        savingsBalance += interest;
    }
     void modifyInterestRate(int newInterestRate){
        annualInterestRate = newInterestRate;
    }

    SavingsAccount(int annualInterestRate , int savingsBalance){
        this->savingsBalance = savingsBalance;
        this->annualInterestRate = annualInterestRate;
    }
    void show_info(){
        cout<<"Annual Interest Rate: "<<annualInterestRate<<endl;
        cout<<"Savings Balance: "<<savingsBalance<<endl;
    }

};

int main(){
    SavingsAccount s1(3 , 2000);
    SavingsAccount s2(3, 3000);
    s1.calculateMonthlyInterest();
    s2.calculateMonthlyInterest();
    s1.show_info();
    s2.show_info();
    s1.modifyInterestRate(4);
    s2.modifyInterestRate(4);
    s1.calculateMonthlyInterest();
    s2.calculateMonthlyInterest();
    s1.show_info();
    s2.show_info();



}
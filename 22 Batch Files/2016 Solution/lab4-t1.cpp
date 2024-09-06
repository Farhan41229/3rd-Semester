#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name;
    int id;
    int gpa;
    int year_birth;
    int month_birth;
    int day_birth;

    public:
    Student(){
        name = "NULL";
        id = 0;
        gpa = 0;
        year_birth = 0;
        month_birth = 0;
        day_birth = 0;
    }

    void set_info(string name, int id, int gpa, int year_birth, int month_birth, int day_birth){
        this->name = name;
        this->id = id;
        this->gpa = gpa;
        this->year_birth = year_birth;
        this->month_birth = month_birth;
        this->day_birth = day_birth;
    }

    void get_info(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID = "<<id<<endl;
        cout<<"GPA = "<<gpa<<endl;
        cout<<"Date of Birth: "<<year_birth<<"/"<<month_birth<<"/"<<day_birth<<endl;
        cout<<endl;
    }

    void get_Age(){
        int year1;
        int month1;
        int day1;
        cin>>year1>>month1>>day1;

        int r_day = day1 - day_birth;
        if(r_day<0){
            r_day *= -1;
            month1--;
        }
        int r_month = month1 - month_birth;
        if(r_month<0){
            r_month *= -1;
            year1--;
        }
        int r_year = year1 - year_birth;

        cout<<"Age: "<<r_year<<" years "<<r_month<<" months "<<r_day<<" days"<<endl;
    }
};

int main(){
    Student s1;
    // s1.get_info();
    s1.set_info("Farhan" , 29 , 4.0 , 2003, 12 , 1);
    s1.get_info();
    s1.get_Age();
}
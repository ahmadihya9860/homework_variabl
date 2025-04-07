#include <iostream>
using namespace std;

int main(){
    string name;
    cout <<"what is your name?"<<endl;
    cin >>name; 
    cout <<" how old you ?"<<endl;
    int age;
    cin >>age;
    cout <<"your city"<<endl;
    string city;
    cin >>city;
    cout << "your country "<<endl;
    string country;
    cin >>country;
    cout << "your monthly salary"<<endl;
    float  monthly_salary;
    cin >>monthly_salary;
    cout << "your gernder"<<endl;
    char gender;
    cin >>gender;
    cout <<"you is married ?"<<endl;
    bool ismarried;
    cin >>ismarried;

    cout<<"**********************************************"<<endl;
    cout <<"name : "<<name << endl;
    cout <<"age : " << age << endl;
    cout <<"city : "<<city << endl;
    cout <<"contry : "<<country << endl;
    cout <<"monthly salary : "<< monthly_salary <<endl;
    cout <<"yearl salary : "<<monthly_salary*12<<endl;
    cout <<"gender : "<<gender<<endl;
    cout <<"married : " << ismarried<<endl;
    cout<<"***********************************************"<<endl;
    return 0;

}
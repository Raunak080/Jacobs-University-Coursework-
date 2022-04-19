#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    double gpa;
    int age;

    Student(string aname, double agpa, int aage){
        name=aname;
        gpa=agpa;
        age=aage;

    }  
    

    bool Honors(){
        if(gpa>2.5){
            cout<<"has honors";
        }
    }

};



int main(){

    Student A("Raunak ", 3.0, 19);
    Student B("asdasd", 3.5, 22);

    cout << A.name << endl;
    cout << A.Honors();
   
}
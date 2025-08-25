#include <iostream>
using namespace std;

class employee{

    public:
        int emp_id;
        int emp_name;
        int emp_salary;
    void getData(){
        cout<<"Enter employee ID: "<<emp_id<<endl;
        cout<<"Enter employee Name: "<<emp_name<<endl;
        cout<<"Enter employee salary: "<<emp_salary<<endl;
    }

    void display(){
        cout<<emp_id<<endl;
        cout<<emp_name<<endl;
        cout<<emp_salary<<endl;

    }
};

int main(){
    employee em1;
    em1.getData();
    em1.display();

    employee em2;
    em2.getData();
    em2.display();

    employee em3;
    em3.getData();
    em3.display();

    employee em4;
    em4.getData();
    em4.display();

    employee em5;
    em5.getData();
    em5.display();
}

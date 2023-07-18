#include<iostream>
#include<cstring>
using namespace std;
class Car
{
    string name;
    int age;
    float salary;
public:
Car(string n, int a, float s)
{
    name=n;
    age=a;
    salary=s;
    cout<<"Name: "<<name<<", Age: "<<age<<" , Salary: "<<salary<<endl;
}

};
int main()
{
Car car("Daniel",34,678.90);

    return 0;
}
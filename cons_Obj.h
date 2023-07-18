#include<iostream>
#include<cstring>
using namespace std;
class customer{
private:
    string name;
    int age;
    float salary;
public:
void setName(string nm)// setters 
{
    name=nm;
}
//Getters 
string getName()
{
return name;
}
void setAge(int ag)
{
    age=ag;
}
int getAge()
{
    return age;
}
void setSalary(float sal)
{
    salary=sal;
}
float getSalary()
{
    return salary;
}
};

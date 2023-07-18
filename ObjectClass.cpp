// Class ->  describes the structure 
// Object -> is a spacific example of that structure (instance)
//Instance-> Another name for the object or instantiating ir like creating object 
// Data members -> vairiables 
// Methods -> Functions
// Abstraction 
// Encapsulation 
// Inheritance 
// Polymorphisim

#include<iostream>
using namespace std;
class StudentData{
private:
     string Name;
    int Age;
    float Salary;
public:
void setName(std::string name)
{
    this->Name=name;
}
void setAge(int  age)
{
    this->Age=age;
}
void setSalary(float salary)
{
    this->Salary=salary;
}
void printstu_data(){
  
    cout<<"NAME:"<<Name<<endl;
    cout<<"AGE:"<<Age<<endl;
    cout<<"SALARY:"<<Salary<<endl;

}
};
class Teacher:public StudentData{

};
int main()
{

// StudentData stu;
// stu.setName("Felix");
// stu.setAge(34);
// stu.setSalary(4567.89);
// stu.printstu_data();
Teacher t;
t.setName("Eyob");
t.setAge(78);
t.setSalary(678.90);
t.printstu_data();
    return 0;
}
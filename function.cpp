#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
//Display student information using structure user defined datatype
// student name, id, age, coursename;
struct Student
{
  private:
 string Name;
 int Age;
 string location;
 string course_name;
 public:
 void print_student_information(string name,int age)
 {
Name=name;
Age=age;
cout<<"NAME :"<<name<<endl;
cout<<"AGE  :"<<age<<endl;


 }

};

int main()
{
   
  Student var;
  var.print_student_information("Felix",56);

    return 0;
}



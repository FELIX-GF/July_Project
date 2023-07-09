#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
//Display student information using structure user defined datatype
// student name, id, age, coursename;
struct Student
{
 private:
 string name;
 int age;
 string location;
 string course_name;
 void printSothing()
 {
    cout<<"hello Student, how are you today"<<endl;
 }
};
Student var;

int main()
{
    // var.age=34;
    // var.name="Helen";
    // var.location="Tulu";
   

//diaplay the information
  
cout<<"Enter student name:";
cin>>var.name;
cout<<"Enter student name:";
cin>>var.age;
cout<<"Name:"<<var.name<<endl;
cout<<"Age:"<<var.age<<endl;
  //cout<<"something:"<<var.printSothing()<<endl;
  //var.printSothing();

    return 0;
}



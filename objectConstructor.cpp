#include<iostream>
#include "cons_Obj.h"
using namespace std;

int main()
{
customer cust;
cust.setName("Felix");
cust.setAge(34);
cust.setSalary(2345.78);
cout<<"NAME:"<<cust.getName()<<endl;
cout<<"AGE:"<<cust.getAge()<<endl;
cout<<"SALARY:"<<cust.getSalary()<<endl;


    return 0;
}
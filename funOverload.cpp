#include<iostream>
#include<cmath>
using namespace std;

int addNun(int x, int y)
{
    return x+y;
}
double addNun(double x, double y){

    return x+y;
}
int main()
{

int num1=addNun(4,5);
double num2=addNun(3.4,7.8);
cout<<"INT:"<<num1<<endl;
cout<<"DOUBLE:"<<num2<<endl;
cout<<endl;
return 0;
}


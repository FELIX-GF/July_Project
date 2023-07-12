#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
// Define function prototype 
int MAX(int x, int y,int z);
int main()
{

 int  num, num1, num3;
 cout<<"Please Enter Number 1:";
 cin>>num;
 cout<<"Please Enter Number 2:";
 cin>>num1;
 cout<<"Please Enter Number 3:";
 cin>>num3;
 cout<<endl;
 cout<<" The Maximum  Value is :"<<MAX(num,num1,num3)<<endl;
    return 0;

}
int MAX(int x, int y, int z)
{
  int maxValue=x;

  if(y>maxValue)
  {
    maxValue=y;
  }
   if(z>maxValue)
  {
    maxValue=z;
  }
  return maxValue;
}


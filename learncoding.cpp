#include<iostream>
using namespace std;
void printSomething(int num[5])
{
    int sum=0;
    for(int  i=0;i<5;i++)
 {
         sum=sum+num[i];// sum=sum+i;        
}
  cout<<"SUM:"<<sum<<endl;   
}
int main()
{


// void studentData(string country="SWEEDEN ")
// {
//     cout<<country<<"is the best country  "<<endl;
// }

// studentData("JAPAN  ");
// studentData("AMERICA ");
// studentData();
// studentData("SPAIN ");
int arr[5]={20,30,40,50,60};
printSomething(arr);

 

    return 0;

}
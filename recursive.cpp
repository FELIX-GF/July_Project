#include<iostream>
#include<cmath>
using namespace std;
int f(int n){
    if(n>0)
    return n+2*f(n-1);
    else 
    return 0;
}
int main()
{
int fun=f(10);
cout<<" n+f(n-1) :"<<fun<<endl;

return 0;
}

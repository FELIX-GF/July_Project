//C++ Example programming (rolling dice)
#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
const short minValue=1;
const short maxValue=6;
srand(time(0));
short first =rand()%(maxValue-minValue+1)+minValue;
short second =rand()%(maxValue-minValue+1)+minValue;
cout<<first<<", "<<second;
cout<<endl;

    return 0;
}


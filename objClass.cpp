/* Object Oriented Programming Language.
Procedural programming is about writing procedures or , 
 or functions that perform operations on the data
 object-oriented programming is about creating objects that,  
contain both data and functions
*/
#include<iostream>
using namespace std;
class Dog {
string Name;
string Color;
string Weight;
public:
void setName(string name)
{
Name=name;
}
string getNAme()
{
return Name;  
}
// use setters and getters to access private user data which is called encapsulation 
void setColor(string color)
{
Color=color;
}
string getColor()
{
return Color;  
}
void SetWeight(string weight)
{
    Weight=weight;
}
string getWeight()
{
    return Weight;
}
};

int main()
{
Dog obj;
obj.setName("Felix");
cout<<" NAME :"<<obj.getNAme()<<endl;
obj.setColor("White");
cout<<"COLOR: "<<obj.getColor()<<endl;
obj.SetWeight("45KG");
cout<<"WEIGHT: "<<obj.getWeight()<<endl;


    return 0;
}
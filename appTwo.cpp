    #include <string>
    //#include <time.h>
    #include <cstdlib>
    #include <ctime>
    #include <iostream>
    #include <unistd.h>
    //#include <windows.h>
    using namespace std;
    int coinToss();
    float calculateTotal(int number, float money);
    int main()
    {
       int number;
       float money = 0;
       int head = 0;
       int tail = 0;
       cout<<"\t\tMy Coin Flip Simulation Program"<<endl;
       for(int i= 0;i<10;i++)
       {
          number = coinToss();
          if(number == 1)
          {
            cout<<"HEADS"<<endl;  
            money = calculateTotal(number,money); 
            head ++;    
          }
          else
          {
             cout<<"TAILS"<<endl; 
             money = calculateTotal(number,money);  
             tail ++;
          }
           sleep(1);
       }
       cout<<"Total heads: "<<head<<endl;
       cout<<"Total tails: "<<tail<<endl;
       cout<<"Total winnings: $"<<money<<endl;
        //system("pause");
        return 0;
    }
    float calculateTotal(int number, float money)
    {
        if(number == 1)
          {
            money = money + 1.0;      
          }
          else
          {
              money = money - 1.0;  
          }
        return money;
    }
    int coinToss()
    {
        int num;   
        srand ((unsigned) time(0));
        num = rand()%2 + 1;  
      
        return num;
    }
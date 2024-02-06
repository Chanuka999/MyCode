#include<iostream>
#include<string>
using namespace std;

   
   float calculateChargeTime(int C,int Y,float V){
   
   float chargingTime = 0.0;
 if(0<C && C<40){
   	
   	chargingTime += 2.0;
   }
   else if(40<=C && 60>C)
   {
    chargingTime += 1.0;
   }
   else if(60<=C && C<100)
   {
   	chargingTime += 0.5;
   }
   if(Y>=2)
   {
   	chargingTime += 1.0;
   }
   else
   {
   	chargingTime += 0.5;
   }
   if(V==1.5)
   {
   	chargingTime += 0.5;
   }
   else
   {
   	chargingTime += 1.0;
   }
  return chargingTime;
}
int main(){
   int currentCapacity;
   int useOfYear;
   double voltage;
   
   cout<<"Enter the current capacity of battery :";
   cin>>currentCapacity;
   cout<<"Enter the year of use of the phone :";
   cin>>useOfYear;
   cout<<"Enter te voltage of phone :";
   cin>>voltage;
  
  float result = calculateChargeTime(currentCapacity,useOfYear,voltage);
  cout<<"the phone full charge time is :"<<result<<"hours"<<endl;
return 0;
}

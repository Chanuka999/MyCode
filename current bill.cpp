#include<iostream>
using namespace std;

int main(){
	int x,y;
	int unit,totalbill;
	
	cout<<"Enter current meter reading :";
	cin>>x;
	cout<<"Enter current previous meter reading :";
	cin>>y;
	unit =x-y;
	cout<<"Total units consumed :"<<unit;
	
	if(unit>=1 && unit <=30)
	{
		totalbill = unit *25;
		cout<<"total bill is :"<<totalbill;
	}
	else if(unit>=31 && unit <=60)
	{
		totalbill =(30*25)+ (unit-30) *35;
		cout<<"total bill is :"<<totalbill;
	}
	else if(unit>=61 && unit <=90)
	{
		totalbill =(30*25)+ (30*35) +(unit-60)*45;
		cout<<"total bill is :"<<totalbill;
	}
	else if(unit>=91 && unit <=120)
	{
		totalbill =(30*25)+ (30*35) +(unit-60)*45;
		cout<<"total bill is :"<<totalbill;
	}
	else if(unit>120)
	{
		totalbill =(30*25)+ (30*35) +(30*45)+(unit-90)*55;
		cout<<"total bill is :"<<totalbill;
	}
	
	
	
	
	
	return 0;
}

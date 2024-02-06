#include<iostream>
using namespace std;
int main(){
	int nic;
	int year, Date,data1;
	int a=500;
	cout<<"Enter your NIC number :";
	cin>>nic;
	year=nic / 10000000;
	{
	
	cout<<"YEAR =19"<<year<<endl;}
	Date = (nic%10000000)/10000;
	
	
	if(Date <= 500)
	{
		cout<<"GENDER = MALE"<<endl;
	}
	else if(Date>500)
	{
		cout<<"GENDER = FEMALE"<<endl;
		
	}
	if(Date>0 && Date <=31 )
	{
		cout<<"Month = January"<<endl;
		cout<<"Date ="<<Date<<endl;
		cout<<"data ="<<data1<<endl;
	}
	else if(Date>31 && Date <=60)
	{
		cout<<"Month = Febuary"<<endl;
		cout<<"Date ="<<31-Date<<endl;
	}
	else if(Date>60 && Date <=91)
	{
		cout<<"Month = March"<<endl;
		cout<<"Date ="<<60-Date<<endl;
	}
	else if(Date>91 && Date <=121)
	{
		cout<<"Month = April"<<endl;
		cout<<"Date ="<<91-Date<<endl;
	}
	else if(Date>121 && Date <=152)
	{
		cout<<"Month = May"<<endl;
		cout<<"Date ="<<121-Date<<endl;
	}
	else if(Date>152 && Date <=183)
	{
		cout<<"Month = May"<<endl;
		cout<<"Date ="<<152-Date<<endl;
	}
	else if(Date>183 && Date <=213)
	{
		cout<<"Month = June"<<endl;
		cout<<"Date ="<<183-Date<<endl;
	}
	else if(Date>213 && Date <=244)
	{
		cout<<"Month = Jully"<<endl;
		cout<<"Date ="<<213-Date<<endl;
	}
	else if(Date>244 && Date <=274)
	{
		cout<<"Month = August"<<endl;
		cout<<"Date ="<<244-Date<<endl;
	}
	else if(Date>274 && Date <=305)
	{
		cout<<"Month = Septhember"<<endl;
		cout<<"Date ="<<274-Date<<endl;
	}
	else if(Date>305 && Date <=335)
	{
		cout<<"Month = Octomber"<<endl;
		cout<<"Date ="<<305-Date<<endl;
	}
	else if(Date>335 && Date <=366)
	{
		cout<<"Month = Octomber"<<endl;
		cout<<"Date ="<<335-Date<<endl;
	}
	else if(Date>366 && Date <=396)
	{
		cout<<"Month = November"<<endl;
		cout<<"Date ="<<366-Date<<endl;
	}
	else if(Date>396 && Date <=427)
	{
		cout<<"Month = December"<<endl;
		cout<<"Date ="<<396-Date<<endl;
	}
	return 0;
}

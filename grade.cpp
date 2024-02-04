#include<iostream>
#include<String>
using namespace std;
int main()
{
	string subject[10];
	cout<<"Enter the subject name:"<<endl;
	for (int i=0;i<9;i++)
	{
		cin>>subject[i];
	}
	float marks[10];
	cout<<"Enter the subject marks:"<<endl;
	for(int i=0;i<9;i++){
	
	cin>>marks[i];
}
   cout<<"Results"<<endl;
  for(int i=0;i<=8;i++)
{
	if(marks[i]>=75)
{

cout<<subject[i]<<" " <<"A";}

	else if(65<=marks[i] && 75 > marks[i])
	{
		cout<<subject[i]<<" " <<"B";
	}
	else if(55<=marks[i] && 65 >marks[i])
	{
		cout<<subject[i]<<" "<<"C";
		
	}
	else if(35<=marks[i] && 55 >marks[i])
	{
		cout<<subject[i]<<" "<<"S";
	}
	else
	{
		cout<<subject[i]<<" "<<"F";
	}
	cout<<endl;
}
return 0;

}

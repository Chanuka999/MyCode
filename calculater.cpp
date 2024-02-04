#include<iostream>
using namespace std;
int main(){
	double a,b;
	char x;
	
	cout<<"\n\n\t  calculater  \t\n\n"<<endl;
	cout<<"\t ADDITION = '+'\t "<<endl;
	cout<<"\t SUBSTRACT = '-' \t"<<endl;
	cout<<"\t MULTYPLY = '*'\t"<<endl;
	cout<<"\t DIVIDE = '/'\t"<<endl;
	
	cout<<"Enter the showchoice :";
	cin>>x;
	
	if(x=='+'){
		cout<<"Enter first number :";
		cin>>a;
		cout<<"Enter second number :";
		cin>>b;
		cout<<a<<"+"<<b<<"="<<a+b;
	}
	else if(x=='-'){
		cout<<"Enter first number :";
		cin>>a;
		cout<<"Enter second number :";
		cin>>b;
		cout<<a<<"-"<<b<<"="<<a-b;
	}
	else if(x=='*'){
		cout<<"Enter first number :";
		cin>>a;
		cout<<"Enter second number :";
		cin>>b;
		cout<<a<<"*"<<b<<"="<<a*b;
	}
	else if(x=='/'){
		cout<<"Enter first number :";
		cin>>a;
		cout<<"Enter second number :";
		cin>>b;
		cout<<a<<"/"<<b<<"="<<a/b;
	}
	
	return 0;
}

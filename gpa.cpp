#include<iostream>
using namespace std;

int main(){
  char grade;
  	cout<<"_______***GPA FINDER***______"<<endl;
  	cout<<"Enter the grade :";
  	cin>>grade;
  	if(grade=='A' || grade=='a'){
	  
  	  cout<<" GPA= 4.0 ";
  }
    else if(grade=='B' || grade=='b'){
	
  	  cout<<"GPA = 3.0";
  }
  	else if(grade=='C' || grade=='c'){
	  
  	   cout<<"GPA=2.0";
  }
  	else if(grade=='D' || grade=='d'){
  	    cout<<"GPA=1.0";}
  	else if (grade=='F' || grade=='f')
  	{
  	     cout<<"GPA =0.0";}
    else{
    	cout<<"wrong answer";
	}
 return 0;
}

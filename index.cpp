#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"ENTER THE DAYS OF MONTH(0-31) :";
	cin>>a;
	switch(a )
	{
		case 1: case 8: case 15: case22: case 29:			
			cout<<"Day is a monday";
			break;
		case 2: case 9: case 16: case 23: case 30:
			cout<<"Day is a tuesday";
			break;
		case 3: case 10: case 17: case 24: case 31:
			cout<<"Day is a wednsday";
			break;
		case 4: case 11: case 18: case 25:
			cout<<"Day is a thursday";
			break;
		case 5: case 12: case 19: case 26: 
		    cout<<"Day is a friday";
		    break;
		case 6: case13: case 20: case 27:
			cout<<"Day is a saturday";
			break;
		case 7: case 14: case 21: case 28:
			cout<<"Day is a sunday";
			break;
		default :
		cout<<"invaid number";	
	}
	cout<<endl;
	return 0;
}

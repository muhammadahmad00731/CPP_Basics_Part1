// Task 8
#include<iostream>
using namespace std;
int main(){
	float power, voltage, current;
	cout<<"Enter voltage(V) in volts:  ";
	cin>>voltage;
	cout<<"\nEnter current(I) in amperes:  ";
	cin>>current;
	power = voltage * (current);
	cout<<endl<<"The power is "<<power<<" watts.";
}

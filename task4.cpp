// Task 4
#include<iostream>
using namespace std;
int main(){
	float Q,T;
	float I;
	cout<<"Enter the charge(Q) in columbs:  ";
	cin>>Q;
	cout<<"\nEnter time(t) in seconds:  ";
	cin>>T;
	I = Q/T;
	cout<<"\nThe current(I) is: "<<I<<" Amperes";
}

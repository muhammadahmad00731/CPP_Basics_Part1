// Task 6
#include<iostream>
using namespace std;
int main(){

	double mb, bits;
	cout<<"Enter the size in megabytes (mb): ";
	cin>>mb;
	bits = mb * 1024 * 8;
	cout<<endl<<mb<< " mb is equivalent to "<<bits <<" bits.";
}

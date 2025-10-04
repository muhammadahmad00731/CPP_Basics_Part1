// Task 5
#include<iostream>
using namespace std;
int main(){
	string name;
	float matric,inter,ecat;
	float matric_weightage, inter_weightage, ecat_weightage, aggregate;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"\nEnter matriculation marks (out of 1100):  ";
	cin>>matric;
	cout<<"\nEnter intremediate marks (out of 550):  ";
	cin>>inter;
	cout<<"\nEnter Ecat marks (out of 400):  ";
	cin>>ecat;
	matric_weightage = (matric/1100) * 100 * 0.10;
	inter_weightage = (inter/550) * 100 * 0.40;
	ecat_weightage = (ecat/400) * 100 * 0.50;
	aggregate = matric_weightage + inter_weightage + ecat_weightage;
	cout<<"\nAggregate score for "<<name<<" is: "<<aggregate<<"%";
}

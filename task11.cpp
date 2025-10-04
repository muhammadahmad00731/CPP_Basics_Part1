// Task 11
#include<iostream>
using namespace std;
int main(){
	int current_population, birth_rate;
	long total_population;
	cout<<"Enter the current current world population: ";
	cin>>current_population;
	cout<<"\nEnter the monthly birth rate (no.of births per month): ";
	cin>>birth_rate;
	total_population = current_population + (365 * birth_rate);
	cout<<total_population;
}

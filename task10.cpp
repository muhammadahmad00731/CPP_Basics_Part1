// Task 10
#include<iostream>
using namespace std;
int main(){
	string team;
	int wins, draws, losses, obtained_points;
	cout<<"Enter the name of the cricket team: ";
	cin>>team;
	cout<<"\nEnter the number of wins: ";
	cin>>wins;
	cout<<"\nEnter the number of draws: ";
	cin>>draws;
	cout<<"\nEnter the number of losses: ";
	cin>>losses;
	obtained_points = (wins * 3) + (draws * 1);
	cout<<endl<<team<<" has obtained "<<obtained_points<<" points.";
}

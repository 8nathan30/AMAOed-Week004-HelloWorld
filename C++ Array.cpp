#include <iostream>

using namespace std;

int main() {
	int sum=0, math[6]={7, 5, 6, 12, 35, 27};
	float average;
	
	cout<<"The numbers are: ";
	for(int i=0; i<6; i++) {
		cout<<math[i]<<" ";
	}
	for(int i=0; i<6; i++) {
		sum+=math[i];
	} 
	cout<<"\nTheir Sum = "<<sum;
	
	average=(float)sum/6;
	cout<<"\nTheir Average = "<<average;
    return 0;
}

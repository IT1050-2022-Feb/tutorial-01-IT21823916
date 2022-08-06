/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

##include <iostream>
using namespace std;


int main() {
  int firstsub,secondsub,total,average;
	
	cout<<"Enter first subject mark: ";
	cin>>firstsub;
	
	cout<<"Enter second subject mark: ";
	cin>>secondsub;
	
	total=firstsub+secondsub;
	average=total/2;
	
	cout<<"Total is: "<<total<<endl;
	cout<<"Average is: "<<average<<endl;
  
  return 0;
}


/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int firstsub,secondsub,total,average;
	
	printf("Enter first subject mark: ");
	scanf("%d",&firstsub);
	
	printf("Enter second subject mark: ");
	scanf("%d",&secondsub);
	
	total=firstsub+secondsub;
	average=total/2;
	
	printf("Total is: %d",total);
	printf("\nAverage is: %d",average);
  
  return 0;
}


#include<stdio.h>
int main() {
	
	int i;
	int total=0;
	float average=0;
	float highest=-999999;
	float lowest=999999;
	int weight[8];
	
	for(i=0; i<8; i++) {
		printf("Enter the Weights of a people  %d:", i+1);
		scanf("%d", &weight[i]);
		
		if( weight[i]<0) {
			printf("\n Please donot enter  negative number");
			i--;
			continue;
		}
		
		total +=weight[i];
		
		if(weight[i]>highest) {
			highest= weight[i];
			
		}
		if(weight[i]<lowest){
			lowest= weight[i];
		}
	
	
	
	}
	average =total/8.0;
	
	printf("\n The total weight of 8 numbers %d", total);
	printf("\n The average weight  is %2.f", average);
	printf("\n The Lowest weight is %2.f", lowest);
	printf("\n the Highest weigt is %2.f", highest);
	return 0;
}

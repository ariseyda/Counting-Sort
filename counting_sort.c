#include<stdio.h>

//Counting Sort

int main(){
	
	int i,j;
	int array1[8]={5,7,2,9,6,1,3,7};
	
	int max=array1[0];
	for(i=0;i<8;i++){
		if(array1[i]>=max){
			max=array1[i];
		}
	}
	
	
	
	
	int array2[max+1];
	
	for(i=0;i<max+1;i++){
		array2[i]=0;
	}
	
	for(i=0;i<8;i++){
		array2[array1[i]]++;
	}
	
	printf("Array:");
	for(i=0;i<8;i++){
		printf("%d ",array1[i]);
	}
	
	printf("\nSorted array:");
	
	
	
	for(i=0;i<max+1;i++){
		for(j=0;j<array2[i];j++){
			printf("%d ",i);
		}
	}

	
	
	
	return 0;
}

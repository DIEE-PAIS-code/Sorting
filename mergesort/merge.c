#include <stdio.h>
#include <stdbool.h>

void merge(int* v1, int *v2, int *v3, int n1, int n2){
	int i1=0,i2=0,i3=0 ;
	// STEP 1
	do {
		if (v1[i1]<=v2[i2]){
				v3[i3]=v1[i1];
				i3++; i1++;
			}
			else{
				v3[i3]=v2[i2];
				i3++; i2++;
			}
		}
		while (i1<n1 && i2<n2);

	// STEP 2
	while(i1<n1){
		v3[i3]=v1[i1];
		i3++; i1++;
	}
	while(i2<n2){
		v3[i3]=v2[i2];
		i3++; i2++;
	}
}

void printArray(int* v, int n){
	printf("[");
	for (int i=0; i<n; i++){
		printf("%d ",v[i]);
	}
	printf("]\n");
}

int main() {
	int nEl1=6, nEl2=9, nEl3=15;
	int vett1[6]={1,3,5,7,9,11};
	int vett2[9]={2,4,6,8,10,12,13,14,15};
	int vett3[15];
	merge(vett1,vett2, vett3, nEl1, nEl2);
	printArray(vett3, nEl3);

	getchar();
	return 0;
}

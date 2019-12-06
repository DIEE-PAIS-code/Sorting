#include <stdio.h>
#include <stdbool.h>

void bubbleSort_4(int* v, int n){
	int tmp,j=0, p=n;
	bool continua;
	do {
		continua=false;
		for (int i=0; i<n-1; i++){
			if (v[i]>v[i+1]){ // SWAP
				continua=true;
				p=i+1;
				tmp=v[i]; v[i]=v[i+1]; v[i+1]=tmp;
			} // end IF
		} // end FOR
	n=p;
	}
	while (continua && n>1);
}
void printArray(int* v, int n){
	printf("[");
	for (int i=0; i<n; i++){
		printf("%d ",v[i]);
	}
	printf("]\n");
}

int main() {


	//int vett[6]={9,18,7,15,21,11};
	//int nEl=6;
	int vett[3]={1,2,0};
	int nEl=3;
	printArray(vett, nEl);
	bubbleSort_4(vett, nEl);
	printArray(vett, nEl);
	getchar();
	return 0;
}

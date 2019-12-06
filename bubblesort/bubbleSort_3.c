#include <stdio.h>
#include <stdbool.h>
void bubbleSort_3a(int* v, int n){
	int tmp;
	bool continua;
	for (int j=0; j<n-1; j++){
		continua=false;
		for (int i=0; i<n-1-j; i++){
			if (v[i]>v[i+1]){ // SWAP
				continua=true;
				tmp=v[i]; v[i]=v[i+1]; v[i+1]=tmp;
			}
		}
	 if (continua==false) break;
	}
}
void bubbleSort_3b(int* v, int n){
	int tmp,j=0;
	bool continua;
	do {
		continua=false;
		for (int i=0; i<n-1; i++){
			if (v[i]>v[i+1]){ // SWAP
				continua=true;
				tmp=v[i]; v[i]=v[i+1]; v[i+1]=tmp;
			} // end IF
		} // end FOR
		n=n-1;
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
	int vett[6]={9,18,7,15,21,11};
	int nEl=6;
	printArray(vett, nEl);
	bubbleSort_3a(vett, nEl);
	printArray(vett, nEl);
	getchar();
	return 0;
}

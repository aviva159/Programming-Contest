#include<iostream>
 

void trace(int A[], int N){
	for(int i = 0; i < N; i++){
		if(i != 0){
			printf(" ");
		}
		printf("%d", A[i]);
	}
	printf("\n");

}

void insertionSort(int A[],int N){
	for(int i = 0; i < N-1;i++){
		int tmp = A[i+1];
		int k = i;
		while(k >= 0 && tmp < A[k]){
			A[k+1] = A[k];
			k--;
		}
		A[k+1] = tmp;
		trace(A,N);
	}
}

int main(){
	int N, i, j;
	int A[100];

	scanf("%d", &N);
	for(i = 0; i < N; i++) scanf("%d", &A[i]);

	trace(A, N);
	insertionSort(A,N);

	return 0;
}


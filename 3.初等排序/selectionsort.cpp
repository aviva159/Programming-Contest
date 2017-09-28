#include<iostream>

using namespace std;

int selectionSort(int A[], int N){
	int j = 0;
	int sw = 0;
	for(int i = 0; i < N; ++i){
		int min = i;
		for( j = i; j < N; ++j){
			if(A[j] < A[min]){
				//swap(A[j], A[min]);
				min = j;
			}
		}
		swap(A[i], A[min]);
		if(i != min) sw++;
	}
	return sw;
}
int main(){
	int A[100], N, i, sw;

	scanf("%d", &N);
	for(int i = 0; i < N; ++i){
		scanf("%d", &A[i]);
	}
	sw = selectionSort(A, N);
	for( int i = 0 ; i < N; ++i){
		if(i){printf(" ");}
		printf("%d", A[i] );
	}
	printf("\n");
	printf("%d\n", sw);
	return 0;

}
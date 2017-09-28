#include<iostream>

using namespace std;

struct Card{ char suit, value;};

void bubble(struct Card A[], int N){
	for(int i = 0; )
}

int main(){
	int N;
	Card C1[100], C2[100];
	char ch;

	cin >> N;
	for(int i = 0; i < N; ++i){
		cin >> C1[i].suit >> C1[i].value;
	}
	for(int i = 0; i < N; ++i){
		C2[i] = C1[i];
	}

	bubble(C1, N);
	selection(C2, N);

	print(C1, N);
	cout << "Stable" << endl;
	print(C2, N);
	if(isStable(C1, C2, N)){
		cout << "Stable" << endl;
	}
	else{
		cout << "Not Stable" << endl;
	}
	return 0;

}
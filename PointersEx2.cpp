#include <iostream>

using namespace std;

void Reverse(int *a, int Size) {
	int b[Size];
	int rev = Size - 1;
	
	for(int i = 0; i < Size; i++) {
		b[i] = a[i];
	}
	
	for(int i = 0; i < Size; i++) {
		a[i] = b[rev];
		rev--;
	}

	cout <<"\n";
}

int main() {
	
	int a[10]{1,2,3,4,56,78,64,34,44,10};
	
	for(int i = 0; i < 10; i++) {
		cout << a[i] <<" ";
	}
	cout << "\n";
	
	Reverse(a, 10);
	
	for(int i = 0; i < 10; i++) {
		cout << a[i] <<" ";
	}
	
}

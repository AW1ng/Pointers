#include <iostream>

using namespace std;

void SwapAB(int *a, int *b) {
	int t = *a;
	*a = *b; 	
	*b = t;
}


int main() {	
	int a = 11, b = 212;
	cout << "A = " <<a <<" B = " <<b << '\n'; 
	SwapAB(&a, &b);
	cout << "A = " <<a <<" B = " <<b << '\n'; 
}



#include <iostream>
#include <cstring>
using namespace std;


bool Knuth_Morris(char *Text, char* Pattern) {
	int i, j;
	int Result = -1;
	int *A;
	int Count;
	
	if(Pattern[0] == '\0') return 0;
	
	
	// Prefix function
	A = new int[strlen(Pattern) + 1];
	A[0] = -1;
	
	for(i = 0; Pattern[i] != '\0'; i++) {
		A[i + 1] = A[i] + 1;
		while(A[i + 1] > 0 && Pattern[i] != Pattern[A[i+1] -1])
			A[i + 1] = A[A[i + 1] - 1] + 1;
	}
	
	//Searching
	j = 0;
	for(i = 0; Text[i] != '\0';) {
		if(j < 0 || Text[i] == Pattern[j]) {
			i++; j++;
			if(Pattern[j] == '\0') {
				Count++;
			}
		}
		else j = A[j];
	}
	
	delete[] A;
	
	if(Count > 0) return true;
	else return false;
}




int main() {
	char *text = "Hello new world";
	char *pattern = "ew";
	cout << Knuth_Morris(text, pattern);
	
}

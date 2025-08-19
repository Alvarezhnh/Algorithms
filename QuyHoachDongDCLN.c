#include <stdio.h>

int max(int a, int b) {
	if (a>b) return a;
	  else return b;
}

int QuyHoachDongDCLN(int A[], int n) {
	   int si=A[0];
	   int ei=A[0];
	for (int i=0 ; i<n ; i++) {
		ei=max(A[i], si+A[i]);
		si=max(si, ei);
	}
	
	return si;
}

int main() {
	
	
	int n, A[1000];
	scanf("%d", &n);
	
	for (int i=0 ; i<n ; i++) scanf("%d", &A[i]);
	
	printf("%d", QuyHoachDongDCLN(A, n));
	
	return 0;
}

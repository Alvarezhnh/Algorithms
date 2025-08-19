#include <stdio.h>

int helperProd(int list[], int k) {
	
	if (k==1) return list[0];
	
	   else return list[k-1]*helperProd(list, k-1);
}

int Sum(int A[], int n) {
	
	if (n==1) return A[0];
	  
	  else return A[n-1]+Sum(A, n-1);
}

int main() {
	
	int n, list[100];
	scanf("%d", &n);
	
	for (int i=0 ; i<n ; i++) scanf("%d", &list[i]);
	
	printf("%d", helperProd(list, n));
	
	return 0;
}

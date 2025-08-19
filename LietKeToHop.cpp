#include <stdio.h>

int n, m, A[1000];

void Solution() {
	for (int i=1 ; i<=m ; i++) printf("%d ", A[i]);
	
	printf("\n");
}

void Try(int k) {
	for (int i=A[k-1]+1 ; i<=n-m+k ; i++) {
		A[k]=i;
		if (k==m) Solution();
		else Try(k+1);
		}
	}


int main() {
	
	scanf("%d %d", &n, &m);
	
	Try(1);
	
	return 0;
}

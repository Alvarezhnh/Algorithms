#include <stdio.h>
#include <limits.h>

int main() {
	
	int n, A[100], Smax=INT_MIN, Si, i1, i2; 
	
	scanf("%d", &n);
	
	for (int i=0 ; i<n ; i++) {
		scanf("%d", &A[i]);
	}
	
	for (int i=0 ; i<n ; i++) {
		  Si=0;
		for (int j=i ; j<n ; j++) {
			Si+=A[j];
			if (Si>Smax) {
				Smax=Si;
				i1=i;
				i2=j;
			}
		}
	}
	
	printf("%d %d\n%d", i1, i2, Smax);
	
	return 0;
}

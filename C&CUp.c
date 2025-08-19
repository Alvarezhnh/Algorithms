#include <stdio.h>
#include <time.h>

long long A[100][100];

long long C(int n, int k) {
	
	if (k==0 || k==n) return 1;
	
	else return C(n-1, k-1)+C(n-1, k);
	  
}

long long CUp(int n, int k) {
	
	if (k==0 || k==n) return 1;
	
	if (A[n][k]!=-1) return A[n][k];
	 
	 else {
	 A[n][k] = CUp(n-1, k-1)+CUp(n-1, k);
	 return A[n][k];
}
}

int main() {
	
	int n=30, k=20;
	
	for (int i=0 ; i<=n ; i++) {
		for (int j=0 ; j<=k ; j++) {
			A[i][j]=-1;
		}
	}
	
	clock_t start1, end1, start2, end2;
	double timeC, timeCUp;
	
	start1 = clock();
	
	printf("%lld\n", C(n, k));
	
	end1 = clock();
	
	start2 = clock();
	
	printf("%lld\n", CUp(n, k));
	
	end2 = clock();
	
	timeC = ((double)(end1 - start1)) / CLOCKS_PER_SEC;
	timeCUp = ((double)(end2 - start2)) / CLOCKS_PER_SEC;
	
	printf("%.10f\n%.10f", timeC, timeCUp);
	
	return 0;
}


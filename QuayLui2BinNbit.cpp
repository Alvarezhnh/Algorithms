#include <stdio.h>

int A[100];
int n;

void GhiNhan(){
 	for (int i=1 ; i<=n ; i++) printf("%d", A[i]);
	   printf("\n");
 }
 
void Try(int k) {
	
	for (int i=0 ; i<=1 ; i++) {
		A[k]=i;
	if (k==n) GhiNhan();
	  else Try(k+1);
}
}

int main() {
	
	scanf("%d", &n);
	
	Try(1);
	
	return 0;
}

#include <stdio.h>

int binarysearch(int low, int high, int A[], int k) {
	
	if (low<=high) {
	
	int mid=(low+high)/2;
	if (A[mid]==k) return mid;
	 else if (A[mid]>k) return binarysearch(low, mid-1, A, k);
	 else return binarysearch(mid+1, high, A, k);
	 
  }
   else
    return -1;
}

int main(){
	
	int n, k, A[100];
	scanf("%d %d", &k, &n);
	
	for (int i=0 ; i<n ; i++) scanf("%d", &A[i]);
	
	printf("%d", binarysearch(0, n-1, A, k));
	
	return 0;
}

#include <stdio.h>
#include <limits.h>

int max(int a, int b, int c) {
	int res;
	if (a>b) res=a;
	    else res=b;
	    if (res<c) res=c;
	    return res;
}

int maxLeft(int A[], int low, int mid) {
	int maxSum=INT_MIN, Sum=0;
	
	for (int i=mid ; i>=low ; i--) {
			Sum+=A[i];
			if (Sum>maxSum) maxSum=Sum;
	}
	return maxSum;
}

int maxRight(int A[], int mid, int high) {
	int maxSum=INT_MIN, Sum=0;
	
	for (int i=mid+1 ; i<=high ; i++) {
			Sum+=A[i];
			if (Sum>maxSum) maxSum=Sum;
	}
	return maxSum;
}

int maxSub(int A[], int low, int high) {
	
	if (low==high) return A[low];
	  
	  else {
	  	
	  	int mid=(low+high)/2;
	  	
	  	int wL=maxSub(A, low, mid);
	  	int wR=maxSub(A, mid+1, high);
	  	int wM=maxLeft(A, low, mid)+maxRight(A, mid, high);
	  	
	  	return max(wL, wR, wM);
	  }
}

int main() {
	
	int n, A[1000];
	scanf("%d", &n);
	
	for (int i=0 ; i<n ; i++) {
		scanf("%d", &A[i]);
	}
	
printf("%d", maxSub(A, 0, n-1));
	
	return 0;
}

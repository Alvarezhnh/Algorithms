#include <stdio.h>

int Fibonacci1(int n) {
	
	if (n==0 || n==1) return n;
	  else return Fibonacci1(n-1) + Fibonacci1(n-2);
}

int Fibonacci2(int n) {
	int i=0, j=1;
	for (int k=1 ; k<=n ; k++){
		j=j+i;
		i=j-i;
	}
	return i;
}

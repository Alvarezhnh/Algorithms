#include <stdio.h>

int Fibonacci(int n) {
	
	if (n==0 || n==1) return n;
	  
	  else return Fibonacci(n-1)+Fibonacci(n-2);
}

int F[100];

int FibonacciUp(int n) {
	
	if (n==0 || n==1) return 1;
	
	if (F[n]!=-1) return F[n];
	
	else {
		F[n] = FibonacciUp(n-1)+FibonacciUp(n-2);
		return F[n];
	}
}

int main() {
	
	int n;
	scanf("%d", &n);
	
	for (int i=0 ; i<=n ; i++) F[i]=-1;
	
	printf("%d", FibonacciUp(n));
	
	return 0;
}

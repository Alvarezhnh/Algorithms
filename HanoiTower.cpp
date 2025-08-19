#include <stdio.h>

int cnt=1;

void HanoiTower(int n, char A, char C, char B) {

	if (n==1) {
		
	    printf("%5d  Chuyen 1 dia tu coc %c sang coc %c\n", cnt, A, C);
	    cnt++;
	}
	
	else {
		HanoiTower(n-1, A, B, C);
		HanoiTower(  1, A, C, B);
		HanoiTower(n-1, B, C, A);
	}
}

int main() {
	
	int n;
	scanf("%d", &n);
	
	HanoiTower(n, 'A', 'C', 'B');
	
  return 0;	
}

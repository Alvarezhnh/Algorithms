#include <stdio.h>

int CountPaths(int i, int j, int C, int D) {
	
	if (i==D || j==C) return 1;
	  
	  else return CountPaths(i+1, j, C, D)+CountPaths(i, j+1, C, D);
}

int CountPathsUp(int i, int j, int C, int D) {
	
	if (i==D || j==C) return 1;
	  
	  else return CountPaths(i+1, j, C, D)+CountPaths(i, j+1, C, D)+CountPaths(i+1, j+1, C, D);
}


int main() {
	
	int i, j, C, D;
	scanf("%d %d %d %d", &i, &j, &C, &D);
	
	printf("%d", CountPaths(i, j, C, D));
	
	return 0;
}

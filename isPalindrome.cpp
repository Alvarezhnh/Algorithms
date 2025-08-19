#include <stdio.h>
#include <string.h>

int isPalindrome(char st[], int low, int high) {
	
	if (low>=high) return 1;

   else {
   	
	  if (st[low]!=st[high]) return 0;
	  else return isPalindrome(st, low+1, high-1);
}

}

int main() {
	
	char st[100];
	fgets(st, 100, stdin);
	
	st[strcspn(st, "\n")]='\0';
	
	int l=strlen(st);
	
	printf("%d", isPalindrome(st, 0, l-1));
	
	return 0;
}

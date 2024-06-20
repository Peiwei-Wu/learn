#include<stdio.h>
#include<string.h>
int main()
{
	int max = 0, L = 0, length = 0;
	char s[10]; fgets(s,10,stdin);
	for (int n = 0; n < strlen(s); n++) {
		L = strlen(s);
		for (int i = n; i < L; i++) 
			for (int j = i + 1; j < L; j++) 
				if (s[i] == s[j]) {
					L = j; break;
				}
		length = L - n;
		if(max < length) 
		       	max = length;
	}
	printf("%d", max);
}

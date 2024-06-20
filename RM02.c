#include<stdio.h>
int main()
{
	int a[5] = {0,1,0,5,12};
	for(int i = 0; i < 5; i++){
		if(a[i] == 0){
			for(int j = i; j < 4; j++){
				int tempt = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tempt;
			}
		}
	}
	for(int i = 0; i < 5; i++)
		printf("%d ",a[i]);
	printf("\n");
}

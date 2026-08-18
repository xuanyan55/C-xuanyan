#include<stdio.h>
int main(void) {
	int apple[10];
	int h;
	int count = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &apple[i]);}
	scanf("%d", &h);
	for (int i = 0; i < 10; i++) {
		if (apple[i] <= h+30)
		{count++;
		}
	}
	printf("%d", count);
	return 0;
}
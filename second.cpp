#include <stdio.h>
int main() {
	int k;
int n = 0;
double sum = 0;
scanf_s("%d",&k);
while (sum <= k) {
	n = n + 1;
	sum = sum + 1.0 / n;
}
printf("n%d\n", n);
return 0;
}
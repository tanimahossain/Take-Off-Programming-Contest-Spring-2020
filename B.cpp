#include<stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int odds = 0;

	if (a & 1)
		odds++;

	if (b & 1)
		odds++;

	if (c & 1)
		odds++;


	printf("%s\n", odds > 0 and odds < 3 ? "3 Kimonos for Nezuko" : "You have to choose two");
	return 0;
}

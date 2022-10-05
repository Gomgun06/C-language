#include <stdio.h>

int main(void)
{
	int ID = 0;

	printf("ID = ");
	scanf("%d", &ID);

	int PW = 0;

	printf("Password = ****\b\b\b\b");
	scanf("%d", &PW);

	printf("ID = %d, Password = %d\n", ID, PW);

	return 0;
}

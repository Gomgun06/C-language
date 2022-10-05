#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void soundmeter(int j, char A) {
	srand((unsigned)time(NULL));
	int i, k, l;
	for (i = 0; i < 100; i++) {
		system("cls");
		for (k = 1; k <= j; k++) {
			for (l = 0; l < rand() % 80 + 1; l++) {
				printf("%c", A);
			}
			printf("%d\n", k);
		}
	}
}

int drawbox(int width, int height, char wall, int walks, char player) {
	int i, j, rkfh = 2, tpfh = 2; //rkfh=가로, tpfh=세로
	if (width < 3 || width>80 || height < 3 || height>25 || walks < 0)
	{
		system("cls");
		printf("범위 에러\n");
		return -1;
	}
	
	for (; walks >= 1; walks--) {
		system("cls");
		for (i = 1; i <= height; i++) {
			if (i == 1 || i == height) {
				for (j = 0; j < width; j++) {
					printf("%c", wall);
				}
			}
			else {
				if (i == tpfh)
				{
					printf("%c", wall);
					for (j = 1; j < rkfh-1; j++)
						printf(" ");
					printf("%c", player);
					for (j = 1; j <= width - (rkfh+1); j++)
						printf(" ");
					printf("%c", wall);
				}
				else {
					printf("%c", wall);
					for (j = 1; j <= width - 2; j++)
						printf(" ");
					printf("%c", wall);
				}
			}
			printf("\n");
		}
		rkfh++;
		if (rkfh > width - 1)
		{
			rkfh = 2;
			tpfh++;
		}
		if (tpfh > height - 1)
			tpfh = 2;
		system("timeout 1 > NULL");
	}
	return 0;
}

int main(void)
{
	int width, height, walks;
	char wall, player;
	printf("가로 세로 벽문자를 입력? ");
	scanf("%d %d %c", &width, &height, &wall);
	printf("걸음수 플레이어 문자를 입력?");
	scanf("%d %c", &walks, &player);
	drawbox(width, height, wall, walks, player);
	return 0;
}

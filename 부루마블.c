#include <stdio.h>
#include <time.h>

int main(void)
{
	srand((unsigned int)time(NULL));
	int answer = 0, ppoint = 0, pdice1 = 0, pdice2 = 0, cpoint = 0, cdice1 = 0, cdice2 = 0;
	int pstate = 0, cstate = 0, escape = 1, j;
	while (1) {
		printf("주사위를 굴리시겠습니까? (0, 1)? ");
		scanf("%d", &answer);
		if (answer != 0 && answer != 1)
		{
			printf("ERROR!\n");
			return 0;
		}
		if ((answer == 1 && pstate != 5) || escape == 1) {
			pdice1 = (rand() % 6) + 1;
			pdice2 = (rand() % 6) + 1;
			j = 0;
			for (int t = 0; t < 5; t++) {
				printf("%d, %d", rand() % 6 + 1, rand() % 6 + 1);
				system("timeout 1 > NULL");
				printf("\r");
			}
			while (j < pdice1 + pdice2)
			{
				system("cls");
				pstate++;
				if (pstate > 10) pstate -= 10, ppoint += 10;
				if (pstate == 1) {
					if (cstate == 1 || cstate == 0) {
						printf("[&%%][2][3][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[&][%%][3][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[&][2][%%][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[&][2][3][%%][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[&][2][3][4][%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[&][2][3][4][5][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[&][2][3][4][5][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[&][2][3][4][5][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[&][2][3][4][5][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[&][2][3][4][5][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 2) {
					if (cstate == 1 || cstate == 0) {
						printf("[%%][&][3][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][&%%][3][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][&][%%][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][&][3][%%][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][&][3][4][%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][&][3][4][5][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][&][3][4][5][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][&][3][4][5][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][&][3][4][5][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][&][3][4][5][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 3) {
					if (cstate == 1 || cstate == 0) {
						printf("[%%][2][&][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][&][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][&%%][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][&][%%][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][&][4][%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][&][4][5][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][&][4][5][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][&][4][5][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][&][4][5][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][&][4][5][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 4) {
					if (cstate == 1 || cstate == 0) {
						printf("[%%][2][3][&][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][&][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][&][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][&%%][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][&][%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][&][5][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][&][5][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][&][5][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][&][5][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][&][5][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 5) {
					if (cstate == 1 || cstate == 0) {
						printf("[%%][2][3][4][&][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][&][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][&][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][&][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][&%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][&][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][&][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][&][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][&][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][&][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 6) {
					if (cstate == 1 || cstate == 0) {
						printf("[%%][2][3][4][5][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][&%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][&][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][&][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][&][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][&][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 7) {
					if (cstate == 1 || cstate == 0) {
						printf("[%%][2][3][4][5][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][%%][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][6][&%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][6][&][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][6][&][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][6][&][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 8) {
					if (cstate == 1 || cstate == 0) {
						printf("[%%][2][3][4][5][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][%%][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][6][%%][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][6][7][&%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][6][7][&][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][6][7][&][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 9) {
					if (cstate == 1 || cstate == 0) {
						printf("[%%][2][3][4][5][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][%%][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][6][%%][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][6][7][%%][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][6][7][8][&%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][6][7][8][&][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 10) {
					if (cstate == 1 || cstate == 0) {
						printf("[%%][2][3][4][5][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][%%][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][6][%%][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][6][7][%%][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][6][7][8][%%][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][6][7][8][9][&%%]\n");
						system("timeout 1 > NULL");
					}
				}
				j++;
			}
			printf("컴퓨터가 굴립니다\n");
			system("timeout 1 > NULL");
			cdice1 = (rand() % 6) + 1;
			cdice2 = (rand() % 6) + 1;
			j = 0;
			while (j < cdice1 + cdice2)
			{
				system("cls");
				cstate++;
				if (cstate > 10) cstate -= 10, cpoint += 10;
				if (pstate == 1) {
					if (cstate == 1) {
						printf("[&%%][2][3][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[&][%%][3][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[&][2][%%][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[&][2][3][%%][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[&][2][3][4][%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[&][2][3][4][5][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[&][2][3][4][5][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[&][2][3][4][5][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[&][2][3][4][5][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[&][2][3][4][5][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 2) {
					if (cstate == 1) {
						printf("[%%][&][3][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][&%%][3][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][&][%%][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][&][3][%%][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][&][3][4][%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][&][3][4][5][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][&][3][4][5][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][&][3][4][5][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][&][3][4][5][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][&][3][4][5][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 3) {
					if (cstate == 1) {
						printf("[%%][2][&][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][&][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][&%%][4][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][&][%%][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][&][4][%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][&][4][5][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][&][4][5][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][&][4][5][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][&][4][5][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][&][4][5][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 4) {
					if (cstate == 1) {
						printf("[%%][2][3][&][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][&][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][&][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][&%%][5][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][&][%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][&][5][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][&][5][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][&][5][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][&][5][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][&][5][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 5) {
					if (cstate == 1) {
						printf("[%%][2][3][4][&][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][&][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][&][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][&][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][&%%][6][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][&][%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][&][6][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][&][6][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][&][6][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][&][6][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 6) {
					if (cstate == 1) {
						printf("[%%][2][3][4][5][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][&][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][&%%][7][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][&][%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][&][7][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][&][7][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][&][7][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 7) {
					if (cstate == 1) {
						printf("[%%][2][3][4][5][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][6][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][%%][&][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][6][&%%][8][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][6][&][%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][6][&][8][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][6][&][8][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 8) {
					if (cstate == 1) {
						printf("[%%][2][3][4][5][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][6][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][%%][7][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][6][%%][&][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][6][7][&%%][9][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][6][7][&][%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][6][7][&][9][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 9) {
					if (cstate == 1) {
						printf("[%%][2][3][4][5][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][6][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][%%][7][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][6][%%][8][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][6][7][%%][&][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][6][7][8][&%%][10]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][6][7][8][&][%%]\n");
						system("timeout 1 > NULL");
					}
				}
				if (pstate == 10) {
					if (cstate == 1) {
						printf("[%%][2][3][4][5][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 2) {
						printf("[1][%%][3][4][5][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 3) {
						printf("[1][2][%%][4][5][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 4) {
						printf("[1][2][3][%%][5][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 5) {
						printf("[1][2][3][4][%%][6][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 6) {
						printf("[1][2][3][4][5][%%][7][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 7) {
						printf("[1][2][3][4][5][6][%%][8][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 8) {
						printf("[1][2][3][4][5][6][7][%%][9][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 9) {
						printf("[1][2][3][4][5][6][7][8][%%][&]\n");
						system("timeout 1 > NULL");
					}
					if (cstate == 10) {
						printf("[1][2][3][4][5][6][7][8][9][&%%]\n");
						system("timeout 1 > NULL");
					}
				}j++;
			}
			if (pstate == 5) {
				int r = 0;
				while (r < 3) {
					r++;
					printf("섬에 갇혔습니다. 주사위를 굴리시겠습니까? (0, 1)? ");
					scanf("%d", &answer);
					if (answer != 0 && answer != 1)
					{
						printf("ERROR!\n");
						return 0;
					}
					if (answer == 1) {
						pdice1 = (rand() % 6) + 1;
						pdice2 = (rand() % 6) + 1;
						for (int t = 0; t < 5; t++) {
							printf("%d, %d", rand() % 6 + 1, rand() % 6 + 1);
							system("timeout 1 > NULL");
							printf("\r");
						}
						if (pdice1 != pdice2) {
							escape = 0;
							printf("%d, %d 탈출 실패!, 컴퓨터가 굴립니다.\n<3초 대기>", pdice1, pdice2);
							system("timeout 3 > NULL");
							cdice1 = (rand() % 6) + 1;
							cdice2 = (rand() % 6) + 1;
							j = 0;
							while (j < cdice1 + cdice2)
							{
								system("cls");
								cstate++;
								if (cstate > 10) cstate -= 10, cpoint += 10;
								if (pstate == 1) {
									if (cstate == 1) {
										printf("[&%%][2][3][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[&][%%][3][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[&][2][%%][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[&][2][3][%%][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[&][2][3][4][%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[&][2][3][4][5][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[&][2][3][4][5][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[&][2][3][4][5][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[&][2][3][4][5][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[&][2][3][4][5][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 2) {
									if (cstate == 1) {
										printf("[%%][&][3][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][&%%][3][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][&][%%][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][&][3][%%][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][&][3][4][%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][&][3][4][5][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][&][3][4][5][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][&][3][4][5][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][&][3][4][5][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][&][3][4][5][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 3) {
									if (cstate == 1) {
										printf("[%%][2][&][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][&][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][&%%][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][&][%%][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][&][4][%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][&][4][5][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][&][4][5][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][&][4][5][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][&][4][5][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][&][4][5][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 4) {
									if (cstate == 1) {
										printf("[%%][2][3][&][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][&][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][&][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][&%%][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][&][%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][&][5][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][&][5][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][&][5][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][&][5][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][&][5][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 5) {
									if (cstate == 1) {
										printf("[%%][2][3][4][&][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][&][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][&][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][&][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][&%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][&][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][&][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][&][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][&][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][&][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 6) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][&%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][&][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][&][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][&][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][&][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 7) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][%%][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][6][&%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][6][&][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][6][&][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][6][&][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 8) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][%%][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][6][%%][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][6][7][&%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][6][7][&][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][6][7][&][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 9) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][%%][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][6][%%][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][6][7][%%][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][6][7][8][&%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][6][7][8][&][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 10) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][%%][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][6][%%][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][6][7][%%][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][6][7][8][%%][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][6][7][8][9][&%%]\n");
										system("timeout 1 > NULL");
									}
								}j++;
							}
							if (ppoint == 50 || cpoint == 50)
							{
								break;
							}
						}
						else if (pdice1 == pdice2)
						{
							escape = 1;
							printf("%d, %d 탈출 성공!, 컴퓨터가 굴립니다.\n>", pdice1, pdice2);
							system("timeout 1 > NULL");
							cdice1 = (rand() % 6) + 1;
							cdice2 = (rand() % 6) + 1;
							j = 0;
							while (j < cdice1 + cdice2)
							{
								system("cls");
								cstate++;
								if (cstate > 10) cstate -= 10, cpoint += 10;
								if (pstate == 1) {
									if (cstate == 1) {
										printf("[&%%][2][3][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[&][%%][3][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[&][2][%%][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[&][2][3][%%][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[&][2][3][4][%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[&][2][3][4][5][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[&][2][3][4][5][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[&][2][3][4][5][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[&][2][3][4][5][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[&][2][3][4][5][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 2) {
									if (cstate == 1) {
										printf("[%%][&][3][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][&%%][3][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][&][%%][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][&][3][%%][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][&][3][4][%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][&][3][4][5][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][&][3][4][5][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][&][3][4][5][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][&][3][4][5][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][&][3][4][5][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 3) {
									if (cstate == 1) {
										printf("[%%][2][&][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][&][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][&%%][4][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][&][%%][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][&][4][%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][&][4][5][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][&][4][5][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][&][4][5][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][&][4][5][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][&][4][5][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 4) {
									if (cstate == 1) {
										printf("[%%][2][3][&][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][&][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][&][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][&%%][5][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][&][%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][&][5][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][&][5][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][&][5][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][&][5][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][&][5][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 5) {
									if (cstate == 1) {
										printf("[%%][2][3][4][&][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][&][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][&][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][&][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][&%%][6][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][&][%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][&][6][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][&][6][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][&][6][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][&][6][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 6) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][&][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][&%%][7][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][&][%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][&][7][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][&][7][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][&][7][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 7) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][6][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][%%][&][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][6][&%%][8][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][6][&][%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][6][&][8][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][6][&][8][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 8) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][6][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][%%][7][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][6][%%][&][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][6][7][&%%][9][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][6][7][&][%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][6][7][&][9][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 9) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][6][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][%%][7][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][6][%%][8][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][6][7][%%][&][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][6][7][8][&%%][10]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][6][7][8][&][%%]\n");
										system("timeout 1 > NULL");
									}
								}
								if (pstate == 10) {
									if (cstate == 1) {
										printf("[%%][2][3][4][5][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 2) {
										printf("[1][%%][3][4][5][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 3) {
										printf("[1][2][%%][4][5][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 4) {
										printf("[1][2][3][%%][5][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 5) {
										printf("[1][2][3][4][%%][6][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 6) {
										printf("[1][2][3][4][5][%%][7][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 7) {
										printf("[1][2][3][4][5][6][%%][8][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 8) {
										printf("[1][2][3][4][5][6][7][%%][9][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 9) {
										printf("[1][2][3][4][5][6][7][8][%%][&]\n");
										system("timeout 1 > NULL");
									}
									if (cstate == 10) {
										printf("[1][2][3][4][5][6][7][8][9][&%%]\n");
										system("timeout 1 > NULL");
									}
								}j++;
							}
							break;
						}
					}
					else if (answer == 0)
					{
						escape = 0;
						printf("탈출 실패!, 컴퓨터가 굴립니다.\n<3초 대기>");
						system("timeout 3 > NULL");
						cdice1 = (rand() % 6) + 1;
						cdice2 = (rand() % 6) + 1;
						j = 0;
						while (j < cdice1 + cdice2)
						{
							system("cls");
							cstate++;
							if (cstate > 10) cstate -= 10, cpoint += 10;
							if (pstate == 1) {
								if (cstate == 1) {
									printf("[&%%][2][3][4][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[&][%%][3][4][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[&][2][%%][4][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[&][2][3][%%][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[&][2][3][4][%%][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[&][2][3][4][5][%%][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[&][2][3][4][5][6][%%][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[&][2][3][4][5][6][7][%%][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[&][2][3][4][5][6][7][8][%%][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[&][2][3][4][5][6][7][8][9][%%]\n");
									system("timeout 1 > NULL");
								}
							}
							if (pstate == 2) {
								if (cstate == 1) {
									printf("[%%][&][3][4][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[1][&%%][3][4][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[1][&][%%][4][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[1][&][3][%%][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[1][&][3][4][%%][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[1][&][3][4][5][%%][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[1][&][3][4][5][6][%%][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[1][&][3][4][5][6][7][%%][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[1][&][3][4][5][6][7][8][%%][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[1][&][3][4][5][6][7][8][9][%%]\n");
									system("timeout 1 > NULL");
								}
							}
							if (pstate == 3) {
								if (cstate == 1) {
									printf("[%%][2][&][4][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[1][%%][&][4][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[1][2][&%%][4][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[1][2][&][%%][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[1][2][&][4][%%][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[1][2][&][4][5][%%][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[1][2][&][4][5][6][%%][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[1][2][&][4][5][6][7][%%][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[1][2][&][4][5][6][7][8][%%][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[1][2][&][4][5][6][7][8][9][%%]\n");
									system("timeout 1 > NULL");
								}
							}
							if (pstate == 4) {
								if (cstate == 1) {
									printf("[%%][2][3][&][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[1][%%][3][&][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[1][2][%%][&][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[1][2][3][&%%][5][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[1][2][3][&][%%][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[1][2][3][&][5][%%][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[1][2][3][&][5][6][%%][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[1][2][3][&][5][6][7][%%][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[1][2][3][&][5][6][7][8][%%][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[1][2][3][&][5][6][7][8][9][%%]\n");
									system("timeout 1 > NULL");
								}
							}
							if (pstate == 5) {
								if (cstate == 1) {
									printf("[%%][2][3][4][&][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[1][%%][3][4][&][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[1][2][%%][4][&][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[1][2][3][%%][&][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[1][2][3][4][&%%][6][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[1][2][3][4][&][%%][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[1][2][3][4][&][6][%%][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[1][2][3][4][&][6][7][%%][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[1][2][3][4][&][6][7][8][%%][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[1][2][3][4][&][6][7][8][9][%%]\n");
									system("timeout 1 > NULL");
								}
							}
							if (pstate == 6) {
								if (cstate == 1) {
									printf("[%%][2][3][4][5][&][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[1][%%][3][4][5][&][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[1][2][%%][4][5][&][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[1][2][3][%%][5][&][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[1][2][3][4][%%][&][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[1][2][3][4][5][&%%][7][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[1][2][3][4][5][&][%%][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[1][2][3][4][5][&][7][%%][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[1][2][3][4][5][&][7][8][%%][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[1][2][3][4][5][&][7][8][9][%%]\n");
									system("timeout 1 > NULL");
								}
							}
							if (pstate == 7) {
								if (cstate == 1) {
									printf("[%%][2][3][4][5][6][&][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[1][%%][3][4][5][6][&][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[1][2][%%][4][5][6][&][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[1][2][3][%%][5][6][&][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[1][2][3][4][%%][6][&][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[1][2][3][4][5][%%][&][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[1][2][3][4][5][6][&%%][8][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[1][2][3][4][5][6][&][%%][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[1][2][3][4][5][6][&][8][%%][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[1][2][3][4][5][6][&][8][9][%%]\n");
									system("timeout 1 > NULL");
								}
							}
							if (pstate == 8) {
								if (cstate == 1) {
									printf("[%%][2][3][4][5][6][7][&][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[1][%%][3][4][5][6][7][&][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[1][2][%%][4][5][6][7][&][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[1][2][3][%%][5][6][7][&][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[1][2][3][4][%%][6][7][&][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[1][2][3][4][5][%%][7][&][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[1][2][3][4][5][6][%%][&][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[1][2][3][4][5][6][7][&%%][9][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[1][2][3][4][5][6][7][&][%%][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[1][2][3][4][5][6][7][&][9][%%]\n");
									system("timeout 1 > NULL");
								}
							}
							if (pstate == 9) {
								if (cstate == 1) {
									printf("[%%][2][3][4][5][6][7][8][&][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[1][%%][3][4][5][6][7][8][&][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[1][2][%%][4][5][6][7][8][&][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[1][2][3][%%][5][6][7][8][&][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[1][2][3][4][%%][6][7][8][&][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[1][2][3][4][5][%%][7][8][&][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[1][2][3][4][5][6][%%][8][&][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[1][2][3][4][5][6][7][%%][&][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[1][2][3][4][5][6][7][8][&%%][10]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[1][2][3][4][5][6][7][8][&][%%]\n");
									system("timeout 1 > NULL");
								}
							}
							if (pstate == 10) {
								if (cstate == 1) {
									printf("[%%][2][3][4][5][6][7][8][9][&]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 2) {
									printf("[1][%%][3][4][5][6][7][8][9][&]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 3) {
									printf("[1][2][%%][4][5][6][7][8][9][&]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 4) {
									printf("[1][2][3][%%][5][6][7][8][9][&]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 5) {
									printf("[1][2][3][4][%%][6][7][8][9][&]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 6) {
									printf("[1][2][3][4][5][%%][7][8][9][&]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 7) {
									printf("[1][2][3][4][5][6][%%][8][9][&]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 8) {
									printf("[1][2][3][4][5][6][7][%%][9][&]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 9) {
									printf("[1][2][3][4][5][6][7][8][%%][&]\n");
									system("timeout 1 > NULL");
								}
								if (cstate == 10) {
									printf("[1][2][3][4][5][6][7][8][9][&%%]\n");
									system("timeout 1 > NULL");
								}
							}j++;
						}
					}
					if (r == 3)
						escape = 1;
				}
			}
		}
		if (ppoint >= 50 || cpoint >= 50) {
			if (ppoint >= 50)
				printf("승자는 당신\n");
			else if (cpoint >= 50)
				printf("승자는 컴퓨터\n");
			break;
		}
	}
	return 0;
	}

#include <stdio.h>
#include <time.h>

int main() {
	srand((unsigned)time(NULL));

	int playermoney[5] = { 100,100,100,100,100 }, playerbetting[5], playerhorse[5];
	int win = 0, lose = 0;
	while (playermoney[1] != 0 || playermoney[2] != 0 || playermoney[3] != 0 || playermoney[4] != 0) {
		int i, j, temp, same = 1, finish = 0, bettingsum = 0;
		int HMWP = 0; // how many win palyers
		int horse[12] = { 0 };
		int winplayer[5] = { 0 };
		printf("배팅 금액과 예측 우승말 번호(0~11)는? (잔액 : %d만원)", playermoney[0]);
		scanf("%d %d", &playerbetting[0], &playerhorse[0]);
		if (playerbetting[0] >= playermoney[0])
			playerbetting[0] = playermoney[0];
		bettingsum += playerbetting[0];
		for (i = 1; i < 5; i++) {
			temp = rand() % 50 + 1;
			if (temp >= playermoney[i])
				playerbetting[i] = playermoney[i];
			else
				playerbetting[i] = temp;
			bettingsum += playerbetting[i];
			playerhorse[i] = rand() % 12;
			if (playerhorse[i] == playerhorse[0])
				same++;
		}
		printf("배팅 및 상금 현황:\n");
		printf("사용자 0 우승말 %d에 배팅금액 %d만원\n", playerhorse[0], playerbetting[0]);
		for (i = 1; i < 5; i++) {
			if (playermoney[i] == 0)
				printf("컴퓨터 %d 파산 배팅 불가\n", i);
			else
				printf("컴퓨터 %d 우승말 %d에 배팅금액 %d만원\n", i, playerhorse[i], playerbetting[i]);
		}
		system("timeout 5 > NULL");
		while (1) {
			system("cls");
			for (i = 0; i < 12; i++) {
				for (j = 0; j < horse[i]; j++)
					printf(" ");
				printf("%d:>\n\n", i);
			}
			printf("사용자 우승 예측말 %d, 단독우승시 배당 %.2lf, 우승상금 %d만원\n", playerhorse[0], 1.0 / same, bettingsum);
			system("timeout 1 > NULL");
			if (finish >= 1)
				break;
			for (i = 0; i < 12; i++) {
				horse[i] += rand() % 10;
				if (horse[i] >= 100)
					finish++;
			}
		}
		for (i = 0; i < 12; i++) {
			if (horse[i] >= 100) {
				printf("%d번 말 승리!\n", i);
				for (j = 0; j < 5; j++) {
					if (playerhorse[j] == i) {
						winplayer[j]++;
						HMWP++;
					}
				}
			}
		}
		for (i = 0; i < 5; i++) {
			if (i == 0) {
				if (winplayer[i] == 0) {
					printf("사용자 0 미당첨\n");
					playermoney[i] -= playerbetting[i];
					lose++;
					if (playermoney[i] == 0) {
						printf("사용자 파산\n");
						printf("게임 종료\n");
						printf("최종 보유금 = %d, 사용자 예측 성공률 = %.2f\n", playermoney[0], (float)win / (float)(win + lose));
						return 0;
					}
				}
				else if (winplayer[i] == 1) {
					printf("사용자 0 당첨!! %d만원 획득!\n", bettingsum / HMWP);
					playermoney[i] += bettingsum / HMWP;
					win++;
				}
			}
			else {
				if (winplayer[i] == 0) {
					if (playermoney[i] != 0) {
						printf("컴퓨터 %d 미당첨\n", i);
						playermoney[i] -= playerbetting[i];
						if (playermoney[i] == 0)
							printf("파산\n");
					}
				}
				else if (winplayer[i] == 1 && playermoney[i] != 0) {
					printf("컴퓨터 %d 당첨!! %d만원 획득!\n", i, bettingsum / HMWP);
					playermoney[i] += bettingsum / HMWP;
				}
			}
		}
	}
	printf("모든 컴퓨터 파산. 게임 종료\n");
	printf("최종 보유금 = %d, 사용자 예측 성공률 = %.2f\n", playermoney[0], (float)win / (float)(win + lose));
	
	return 0;
}

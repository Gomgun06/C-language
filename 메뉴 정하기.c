#include <stdio.h>

int main(void)
{
	int MONEY;
	int don = 6000, jjam = 5500, jae = 5000, kim = 4500, jja = 4000;
	printf("투입할 금액은? ");
	scanf("%d", &MONEY);

	// 현재 돈을 가격이 높은 순으로 나눈 몫을 변수에 담은 후 차액 저장
	don = MONEY / don; MONEY %= 6000;
	jjam = MONEY / jjam; MONEY %= 5500;
	jae = MONEY / jae; MONEY %= 5000;
	kim = MONEY / kim; MONEY %= 4500;
	jja = MONEY / jja; MONEY %= 4000;
	printf("제육덮밥 %d개\n", jae);
	printf("김치볶음밥 %d개\n", kim);
	printf("짜장면 %d개\n", jja);
	printf("짬뽕 %d개\n", jjam);
	printf("돈까스 %d개\n", don);
	printf("거스름돈 %d원\n", MONEY);

	return 0;
}

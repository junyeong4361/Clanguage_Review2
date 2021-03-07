#include <stdio.h>
#define CHARGE 2000 //시간당 요금

void main() {
	int time, rate;
	printf("사용 시간을 입력:");
	scanf("%d", &time);//키보드로 입력받은 값을 time에 저장해라~
	rate = time * CHARGE; //time:3 -> rate 6000
	printf("사용 요금은 %d 원 입니다.", rate);



}
#include <stdio.h>
#define CHARGE 2000 //�ð��� ���

void main() {
	int time, rate;
	printf("��� �ð��� �Է�:");
	scanf("%d", &time);//Ű����� �Է¹��� ���� time�� �����ض�~
	rate = time * CHARGE; //time:3 -> rate 6000
	printf("��� ����� %d �� �Դϴ�.", rate);



}
#include<stdio.h>
void main() {
	int height[3][4], tali = 0, i , j;	//�����ά���飬�����ۼ���
	printf("������ʮ��������");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf_s("%d", &height[i][j]);//������������
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (height[i][j] > tali) {	//�������tali��ʱ����tali
				tali = height[i][j];
			}
		}
	}
	printf("���ֵΪ%d", tali);
}
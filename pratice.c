#include<stdio.h>
void main() {
	int height[3][4], tali = 0, i , j;	//定义二维数组，定义累加器
	printf("请输入十二个数：");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf_s("%d", &height[i][j]);//将数存入数组
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (height[i][j] > tali) {	//当数组比tali大时存入tali
				tali = height[i][j];
			}
		}
	}
	printf("最大值为%d", tali);
}
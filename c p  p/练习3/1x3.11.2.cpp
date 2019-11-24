#include <stdio.h>
int main (void){
	int i;
	printf("請輸入一個ASCII字符數：\n");
	scanf("%d",&i);
	printf("這個編碼的字符是：%c",char(i)); 
	
	return 0;
}

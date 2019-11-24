#include <stdio.h>
int main(void){
	float speed,big,time;
	printf("请输入你电脑所下载的速度和文件大小：");
	scanf("%f%f",&speed,&big);
	printf("At %0.2f megabits per second, a file of %0.2f megabytes \ndownloads in %0.2f seconds",speed,big,big/speed);
	
	return 0; 
}

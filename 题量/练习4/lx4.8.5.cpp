#include <stdio.h>
int main(void){
	float speed,big,time;
	printf("����������������ص��ٶȺ��ļ���С��");
	scanf("%f%f",&speed,&big);
	printf("At %0.2f megabits per second, a file of %0.2f megabytes \ndownloads in %0.2f seconds",speed,big,big/speed);
	
	return 0; 
}

#include <stdio.h>
int main (void){
	char sf;
	int income;
	int desired=0;
	float shouru,shuishou;
	while(1)
	{ 
	printf("a:dansheng\tb:huzhu\tc:yihungongyou\td:yihunliyi\n�������"); 
	scanf("%c", &sf);
	switch(sf)
	{
		case 'a':income=17850;
		break;
		case 'b':income=23900;
		break;
		case 'c':income=29750;
		break;
		case 'd':income=14875;
		break;
		default:continue;
	}
	printf("���������룺"); 
	scanf("%d",&desired); 
	if(desired>income)
	{
		shuishou=(desired-income)*0.28+income*0.15; 
	} 
	else
	{
		shuishou=desired*0.15;
	}
	printf("������%0.2f\n�����������һ������\n",shouru=desired-shuishou);
	}
	return 0;	
	}
	


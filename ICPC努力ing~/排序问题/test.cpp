void Merge(int *arr,int len,int gap)
{
	int *brr = (int *)malloc(sizeof(int) * len);  //动态开辟辅助数组
	assert(brr != NULL);
	int i = 0;           //brr的下标
	int start1 = 0;   
	int end1 = start1+gap-1;
	int start2 = end1+1;
	int end2 = start2 + gap - 1 < len - 1 ? start2 + gap - 1 : len - 1 ;     //当有两个归并段的时候
	while(start2 < len)
	{
		//当两个归并段还没有比较完的时候
		while(start1 <= end1 && start2 <= end2)
		{
			if(arr[start1] <= arr[start2])
			{
				brr[i++] = arr[start1++];
			}
			else
			{
				brr[i++] = arr[start2++];
			}
		}
		while(start1 <= end1)     //如果是第二个归并段比较完了，则将第一个归并段中的数放在brr[]
		{
			brr[i++] = arr[start1++];
		}
		while(start2 <= end2)  //如果是第一个归并段比较完了，则将第二个归并段中的数放在brr[]
		{
			brr[i++] = arr[start2++];
		}
		//找两个新的归并段
		start1 = end2+1;
		end1 = start1+gap-1;
		start2 = end1+1;
		end2 = start2+gap-1 < len-1?start2+gap-1:len-1;
	}
	while(start1 < len)  //如果在最后不存在第二个归并段，则将第一个归并段中的数放在brr[]
	{
		brr[i++] = arr[start1++];
	}
	for(int i = 0;i < len;i++)    //数值拷贝
	{
		arr[i] = brr[i];
	}
}
void MergeSort(int *arr,int len)
{
	for(int i = 1;i < len;i *= 2)   //i表示分组数，分组形式为1 2 4 8....
	{
		Merge(arr,len,i);
	}
}

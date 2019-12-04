void Merge(int *arr,int len,int gap)
{
	int *brr = (int *)malloc(sizeof(int) * len);  //��̬���ٸ�������
	assert(brr != NULL);
	int i = 0;           //brr���±�
	int start1 = 0;   
	int end1 = start1+gap-1;
	int start2 = end1+1;
	int end2 = start2 + gap - 1 < len - 1 ? start2 + gap - 1 : len - 1 ;     //���������鲢�ε�ʱ��
	while(start2 < len)
	{
		//�������鲢�λ�û�бȽ����ʱ��
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
		while(start1 <= end1)     //����ǵڶ����鲢�αȽ����ˣ��򽫵�һ���鲢���е�������brr[]
		{
			brr[i++] = arr[start1++];
		}
		while(start2 <= end2)  //����ǵ�һ���鲢�αȽ����ˣ��򽫵ڶ����鲢���е�������brr[]
		{
			brr[i++] = arr[start2++];
		}
		//�������µĹ鲢��
		start1 = end2+1;
		end1 = start1+gap-1;
		start2 = end1+1;
		end2 = start2+gap-1 < len-1?start2+gap-1:len-1;
	}
	while(start1 < len)  //�������󲻴��ڵڶ����鲢�Σ��򽫵�һ���鲢���е�������brr[]
	{
		brr[i++] = arr[start1++];
	}
	for(int i = 0;i < len;i++)    //��ֵ����
	{
		arr[i] = brr[i];
	}
}
void MergeSort(int *arr,int len)
{
	for(int i = 1;i < len;i *= 2)   //i��ʾ��������������ʽΪ1 2 4 8....
	{
		Merge(arr,len,i);
	}
}

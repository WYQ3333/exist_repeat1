//����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
//����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��
//ʾ�� 1:
//���� : [1, 2, 3, 1]
//��� : true
//	 ʾ�� 2 :
// ���� : [1, 2, 3, 4]
//  ��� : false
//	   ʾ�� 3 :
//   ���� : [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
//	��� : true

#include<stdio.h>
#include<Windows.h>

int containsDuplicate(int* nums, int numsSize) {
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		for (int j = i + 1; j < numsSize; j++)
		{
			if ((nums[i] & nums[j]) !=0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	int nums[] = { 3,3 };
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", nums[i]);
	}
	int ret=containsDuplicate(nums, numsSize);
	printf("\n");
	printf("%d ", ret);
	system("pause");
	return 0;
}
//给定一个整数数组，判断是否存在重复元素。
//如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。
//示例 1:
//输入 : [1, 2, 3, 1]
//输出 : true
//	 示例 2 :
// 输入 : [1, 2, 3, 4]
//  输出 : false
//	   示例 3 :
//   输入 : [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
//	输出 : true

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
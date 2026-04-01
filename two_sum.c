#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* result = (int*)malloc(2 * sizeof(int));
    
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    
    *returnSize = 0;
    return result;
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize = 0;

    int* ret = twoSum(nums, numsSize, target, &returnSize);

    for(int i = 0; i < returnSize; i++)
        printf("%d ", ret[i]);
    printf("\n");

    free(ret); // always free malloced memory
    return 0;
}
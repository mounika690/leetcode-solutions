int majorityElement(int* nums, int numsSize) 
{
    int count;
    for(int i=0;i<numsSize;i++)
    {
        count=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
        if(count>numsSize/2)
        {
            return nums[i];
        }

    }
}
int main()
{
    int nums[]={3,2,3};
    int numsSize=sizeof(nums)/size(int);
    int ret = majorityElement(nums,numsSize);
    printf("%d",ret); 
}
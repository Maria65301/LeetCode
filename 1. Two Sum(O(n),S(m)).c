/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int min=nums[0],max=0,len;
    int i,j;
    int *rst = (int*)malloc(sizeof(int)*2);
    for(i=0;i<numsSize;i++)
    {
        min=min<nums[i]?min:nums[i];
        max=target-min;
    }
    len=max-min+1;
    int *hash = (int*)malloc(sizeof(int)*len);
    for(i=0;i<len;i++)hash[i]=-1;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>max) continue;
        j=target-nums[i]-min;
        if(hash[j]!=-1)
        {
            rst[0]=hash[j],rst[1]=i;
            free(hash);
            return rst;
        }
        hash[nums[i]-min]=i;
    }
    free(hash);
    return NULL;
}

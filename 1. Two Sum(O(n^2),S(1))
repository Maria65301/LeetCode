/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *rst = malloc(sizeof(int)*2);
    int i,j;
    for(i = 0; i < numsSize-1; i++)
    {
        for(j = i+1; j< numsSize; j++)
        {
            if(target == nums[i]+nums[j])
            {
                rst[0] = i;
                rst[1] = j;
                goto over;
            }
        }
    }
    over:
    return rst;
}

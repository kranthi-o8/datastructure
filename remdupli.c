/*
LeetCode - Remove Duplicates from Sorted Array
*/

int removeDuplicates(int* nums, int numsSize)
{
    /* If array is empty */
    if(numsSize == 0)
        return 0;

    int i;
    int index = 1;

    for(i = 1; i < numsSize; i++)
    {
        /* Keep only unique elements */
        if(nums[i] != nums[i - 1])
        {
            nums[index] = nums[i];
            index++;
        }
    }

    return index;
}

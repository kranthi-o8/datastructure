/*
LeetCode - Remove Element
*/

int removeElement(int* nums, int numsSize, int val)
{
    int index = 0;

    for(int i = 0; i < numsSize; i++)
    {
        /* Keep elements not equal to val */
        if(nums[i] != val)
        {
            nums[index] = nums[i];
            index++;
        }
    }

    return index;
}

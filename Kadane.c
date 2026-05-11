/*
GeeksforGeeks - Kadane's Algorithm
*/

int maxSubarraySum(int arr[], int n)
{
    int maxSum = arr[0];
    int currentSum = arr[0];

    for(int i = 1; i < n; i++)
    {
        /* Choose maximum between current element
           and extending previous subarray */
        if(currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        /* Update maximum sum */
        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

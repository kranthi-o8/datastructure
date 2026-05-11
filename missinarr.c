/*
GeeksforGeeks - Missing in Array
*/

int missingNum(int arr[], int n)
{
    /* Total sum of numbers from 1 to n+1 */
    long long total = (long long)(n + 1) * (n + 2) / 2;

    long long arraySum = 0;

    for(int i = 0; i < n; i++)
    {
        arraySum += arr[i];
    }

    /* Missing number */
    return (int)(total - arraySum);
}

/*
GeeksforGeeks - Second Largest
*/

int getSecondLargest(int arr[], int n)
{
    int largest = -1;
    int secondLargest = -1;

    for(int i = 0; i < n; i++)
    {
        /* Update largest */
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        /* Update second largest */
        else if(arr[i] > secondLargest &&
                arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

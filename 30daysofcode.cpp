/* 1. Given an array, A, of N  integers, print A's elements in reverse order as a single line of space-separated numbers.

Example
A=[1,2,3,4]

Print 4 3 2 1. Each integer is separated by one space.
*/

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }
    for(int i=n-1; i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

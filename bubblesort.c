using System;

class BubbleSortDemo
{
    static void BubbleSort(int[] arr)
    {
        int n = arr.Length;

        // Outer loop for passes
        for (int pass = 0; pass < n - 1; pass++)
        {
            // Inner loop for comparisons
            for (int i = 0; i < n - pass - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    // Swap elements
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
    }

    static void Main()
    {
        int[] arr = { 55, 50, 67, 34, 45 };

        Console.WriteLine("Original array: " + string.Join(", ", arr));
        BubbleSort(arr);
        Console.WriteLine("Sorted array:   " + string.Join(", ", arr));
    }
}

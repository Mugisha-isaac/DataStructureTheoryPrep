#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);

        do
        {
            j--;
        } while (arr[j] >= pivot);

        if (i < j)
        {
            swap(&i, &j);
        }
    }

    swap(&low, &j);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int j = partition(arr, low, high);
        cout<<"J is : "<<j<<endl;
        quickSort(arr, low, j);
        quickSort(arr, j + 1, high);
    }
}

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    int data[] = {3, 1, 8, 4, 100, 20, 16};
    int n = sizeof(data) / sizeof(data[0]);
    cout << "Unsorted order: " << endl;
    printArray(data,n);

    cout<<"Sorted order is: "<<endl;
    quickSort(data,data[0],data[6]);
    printArray(data,n);

    return 0;
}
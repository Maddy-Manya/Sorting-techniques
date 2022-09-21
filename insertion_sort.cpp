#include <iostream>
using namespace std;

void insertionSort_1(int arr[], int n)
{
    int temp;
    bool flag;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        flag = false; // has to be set for all elements individually
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }

            else
            { // inserted on the right position of temp
                arr[j + 1] = temp;
                flag = true;
                break;
            }
        }

        // case of Smallest wrt temp and sorted array(no space left)
        if (!flag)
        {
            arr[0] = temp;
        }
    }
}

void insertionSort_2(int arr[], int n)
{
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];

        // shift larger elements forward and stop
        // 1. if small
        // 2. when the array goes out of bound
        for (j = i - 1; arr[j] > temp && j >= 0; j--)
        {
            arr[j + 1] = arr[j]; // shifting right
        }

        arr[j + 1] = temp; // setting right position for temp
    }
}

void insertionSort_3(int arr[], int n)
{
    int temp, j;
    for (int i = 1; i < n; i++) 
    {
        temp = arr[i];

        // shift larger elements forward and stop
        // 1. if small
        // 2. when the array goes out of bound
        j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp; // setting right position for temp
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    display(arr, n);
    insertionSort_3(arr, n);
    display(arr, n);
    return 0;
}
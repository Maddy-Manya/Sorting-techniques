#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n; i++) // pass
    {
        int min_idx = i; // using index
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // min_idx is idx of min element in ith pass
        swap(arr[i],arr[min_idx]);
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
    display(arr,n);
    selectionSort(arr, n);
    display(arr,n);
    return 0;
}
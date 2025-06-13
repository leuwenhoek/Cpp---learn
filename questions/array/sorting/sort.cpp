#include <iostream>

using namespace std;

int highest(int arr[], int size_)
{
    int temp = arr[0];
    for (int i = 0; i < size_; i++)
    {
        if (temp < arr[i])
        {
            temp = 0;
            temp = arr[i];
        }
        else if (temp > arr[i])
        {
            continue;
        }
        else
        {
            continue;
        }
    }

    return temp;
}

int lowest(int arr[], int size_)
{
    int temp = arr[0];
    for (int i = 0; i < size_; i++)
    {
        if (temp > arr[i])
        {
            temp = 0;
            temp = arr[i];
        }
        else if (temp < arr[i])
        {
            continue;
        }
        else
        {
            continue;
        }
    }

    return temp;
}

int *sort(int arr[], int size_)
{
    int high = highest(arr, size_);
    int low = lowest(arr, size_);
    int *arr2 = new int[size_]();
    int index = 0;

    for (int val = low; val <= high; val++)
    {
        for (int j = 0; j < size_; j++)
        {
            if (arr[j] == val)
            {
                arr2[index++] = val;
            }
        }
    }

    for (int i = 0; i < size_; i++)
    {
        arr[i] = arr2[i];
    }

    delete []arr2;
    return arr;
}

int *reverse(int arr[], int size_)
{
    int *reversed;
    reversed = new int[size_];

    int *called = sort(arr, size_);

        for (int l = size_; l >= 0; l--)
        {
            reversed[l] = called[size_ - l - 1];
        }


    return reversed;
}

void print(int arr[], int size_, string message)
{
    cout << message;
    for (int i = 0; i < size_; i++)
    {
        if (i < size_ - 1)
        {
            cout << arr[i] << ',';
        }
        else
        {
            cout << arr[i] << endl;
        }
    }
}

int main()
{
    int size_;
    cout << "Enter the size of the array : ";
    cin >> size_;
    cout << endl;

    int *arr;
    arr = new int[size_];

    int i = 0;
    do
    {
        cout << "Enter the value at index [" << i << "] : ";
        cin >> arr[i];
        i++;
    } while (i < size_);

    print(arr, size_, "Your array is = ");

    int* sorted = sort(arr, size_);
    print(sorted, size_, "Sorted array: ");

    int* rev = reverse(sorted, size_);
    print(rev, size_, "Reversed array: ");

    delete[] arr;
    delete []sorted;
    delete []rev;
}
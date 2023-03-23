// Write a C++ program using bubble sort algorithm and the concept of function overloading to sort integers and floating-point numbers.

#include <iostream>
using namespace std;

class BubbleSort
{
public:
    void Sort(int input[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (input[j] > input[j + 1])
                {
                    swap(input[j], input[j + 1]);
                }
            }
        }
        cout << "Sorted array is: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << input[i] << " ";
        }
        cout << endl;
    }

    void Sort(float input[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (input[j] > input[j + 1])
                {
                    swap(input[j], input[j + 1]);
                }
            }
        }
        cout << "Sorted array is: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << input[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    BubbleSort sorter;
    int arr1[5] = {5, 4, 3, 2, 1};
    float arr2[5] = {5.0, 4.0, 3.0, 2.0, 1.0};
    sorter.Sort(arr1, 5);
    sorter.Sort(arr2, 5);
    return 1;
}
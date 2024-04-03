#include <iostream>
#include <climits>
#include <Windows.h>

int findMinSumSequence(int arr[], int start) 
{
    if (start > 90) 
    {
        return -1;
    }

    int minSum = INT_MAX;
    int minPos = start;

    for (int i = start; i <= start + 90; i++) 
    {
        int sum = 0;
        for (int j = i; j < i + 10; j++) 
        {
            sum += arr[j];
        }
        if (sum < minSum) 
        {
            minSum = sum;
            minPos = i;
        }
    }

    return minPos;
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[100];

    int startPos = findMinSumSequence(arr, 0);
    if (startPos != -1) 
    {
        std::cout << "Позиция начала последовательности с минимальной суммой: " << startPos ;
    }
    else
    {
        std::cout << "Последовательность из 10 чисел с минимальной суммой не найдена." ;
    }

    return 0;
}



#include <iostream>
#include <climits>
#include <Windows.h>

int findMax(int arr[], int size)
{
    int maxVal = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int findMax(int arr[][3], int numRows, int numCols)
{
    int maxVal = INT_MIN;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++) 
        {
            if (arr[i][j] > maxVal) 
            {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

int findMax(int arr[][2][2], int dim1, int dim2, int dim3)
{
    int maxVal = INT_MIN;
    for (int i = 0; i < dim1; i++) 
    {
        for (int j = 0; j < dim2; j++)
        {
            for (int k = 0; k < dim3; k++) 
            {
                if (arr[i][j][k] > maxVal)
                {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    return maxVal;
}

int findMax(int a, int b) 
{
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c) 
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr1D[] = { 3, 6, 2, 8, 4, 10 };
    int arr2D[][3] = { {1, 5, 3}, {7, 9, 6} };
    int arr3D[][2][2] = { {{2, 4}, {6, 8}}, {{1, 3}, {5, 7}} };
    int num1 = 20, num2 = 30, num3 = 10;

    std::cout << "Максимальное значение в одномерном массиве: " << findMax(arr1D, 6);
    std::cout << "Максимальное значение в двумерном массиве: " << findMax(arr2D, 2, 3);
    std::cout << "Максимальное значение в трехмерном массиве: " << findMax(arr3D, 2, 2, 2);
    std::cout << "Максимальное значение из двух чисел: " << findMax(num1, num2);
    std::cout << "Максимальное значение из трех чисел: " << findMax(num1, num2, num3);

    return 0;
}

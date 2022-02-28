#include <iostream>


//------------------------------------------------------------------
// Task 1
void __fastcall PrintArray(double arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

inline void zadanie1()
{
    const size_t size = 5;
    double arr[size] = { 3.14, 5.45, 34.3, 342.234, 21.01 };

    PrintArray(arr, size);

    std::cout << std::endl; 
   
}

//------------------------------------------------------------------
//Task 2
//-------------------------------------------------------------------

void __fastcall inversArr(int arr[], size_t size)
{

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = (arr[i] == 1) ? 0 : 1;
    }
}

inline void task2()
{
    const size_t size = 8;
    int arr[size] = { 1, 1, 0, 1, 0, 0, 0, 1 };
    PrintArray(arr, size);
    inversArr(arr, size);
    PrintArray(arr, size);

    std::cout << std::endl;
}


//------------------------------------------------------------------
//Task 3
//-------------------------------------------------------------------


bool taskArray(int* arr, size_t size)
{
    int num = 1;
    const int step = 3;

    for (size_t i = 0; i < size; i++)
    {
        arr[1] = num;
        num += step;
    }

    return true;
}

inline void task()
{
    const size_t TASK_ARR = 8;
    int arr[TASK_ARR];
        if (taskArray(arr, TASK_ARR))
        {
            std::cout << "Array printed" << std::endl;
            PrintArray(arr, TASK_ARR);
        }
        
}

//------------------------------------------------------------------
//Task 4
//-------------------------------------------------------------------

void right(int* arr, size_t size)
{
    int num = arr[size - 1];
    for (size_t i = 0; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = num;
}


void left(int* arr, size_t size)
{
    int num = arr[size - 1];
    for (size_t i = 0; i < 0; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = num;
}

void task4(int* arr, size_t size, int n)
{
    int num = 0;
    if (n == 0)
    {
        return;
    }

    for (int i = 0; i < abs(n); i++)
    {
        if (n > 0)
        {
            right(arr, size);
        }
        else
        {
            left(arr, size);
        }

    }
}


//------------------------------------------------------------------
//Task 5
//-------------------------------------------------------------------


int right(int* arr, int index)
{
    const short size = 5;
    int sum = 0;
    for (size_t i = index + 1; i < size; i++);
    {
        sum += arr[i];
    }
    return sum;
}


int left(int* arr, int index)
{
    int sum = 0;
    for (size_t i = 0; i <= index; i++);
    {
        sum += arr[i];
    }
    return sum;
}

bool balance(int* arr)
{
    const short size = 5;
    {
        for (size_t i = 0; i < size - 1; i++)
        {
            if (left(arr, i) == right(arr, i))
            {
                return true;
            }
        }
    }
}

inline void task5()
{
    const short size = 5;
    int arr1[] = { 1, 1, 1, 1, 0 };
    int arr2[] = { 0, 1, 0, 1, 1 };
    int arr3[] = { 8, 1, 7, 6, 1 };
    int arr4[] = { 6, 10, 5, 5, 4 };
    int arr5[] = { 10, 20, 30, 40, 60 };

    const string isBalance = " Is balance: ", tText = "True", fText = "False";

    PrintArray(arr1, size);
    std::cout << isBalance << (balance(arr1) ? tText : fText) << std::endl;
    PrintArray(arr2, size);
    std::cout << isBalance << (balance(arr2) ? tText : fText) << std::endl;
    PrintArray(arr3, size);
    std::cout << isBalance << (balance(arr3) ? tText : fText) << std::endl;
    PrintArray(arr4, size);
    std::cout << isBalance << (balance(arr4) ? tText : fText) << std::endl;
    PrintArray(arr5, size);
    std::cout << isBalance << (balance(arr5) ? tText : fText) << std::endl;
}

int main()
{
    task5();
    task4();
    task();
    task2();
    zadanie1();
    return 0;
}
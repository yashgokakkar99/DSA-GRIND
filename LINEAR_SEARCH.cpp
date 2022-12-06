#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array 
{
    int A[10];
    int size;
    int length;
};

// Simple Method
/*int LinearSearch(struct Array arr, int key)
{
    for(int i=0;i<arr.length;i++)
    {
        if(key == arr.A[i])
        {
            return i;
        }
    }
    return -1;
}*/

void Swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Transposition method
/*int LinearSearch(struct Array *arr, int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(key == arr->A[i])
        {
            Swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}*/

// Move to head method
int LinearSearch(struct Array *arr, int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(key == arr->A[i])
        {
            Swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}

int main()
{
    struct Array arr = {{2,4,6,8,10,12,14,16,18,20},10,10};
    int res = LinearSearch(&arr, 8);
    cout<<res<<endl;
    Display(arr);

}
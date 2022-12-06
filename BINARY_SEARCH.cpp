#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

// Iterative approach
/*
int BinarySearch(struct Array arr, int l, int h, int key)
{
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
        {
            return mid;
        }
        else if(key < arr.A[mid])
        {
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return -1;
}*/

// Recursive approach
int BinarySearch(struct Array arr, int l, int h, int key)
{
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
        {
            return mid;
        }
        else if(key < arr.A[mid])
        {
            return BinarySearch(arr, l, mid-1, key);
        }
        else
        {
            return BinarySearch(arr, mid+1, h, key);
        }
    }
    return -1;
}


int main()
{
    struct Array arr = {{2,4,6,8,10,12,14,16,18,20}, 10, 10};
    int result = BinarySearch(arr, 0, 9, 10);
    cout<<result;
}
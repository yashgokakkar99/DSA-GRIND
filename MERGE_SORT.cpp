#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
    int length;
    int A[10];
    int size;
};

void Merge(struct Array *arr1, struct Array *arr2, struct Array *arr3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    cout<<"i"<<i<<endl;
    cout<<"j"<<j<<endl;
    cout<<"k"<<k<<endl;
    // For remaining elements
    for(;i<arr1->length;i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for(;j<arr2->length;j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
}

void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    struct Array arr1 = {5,{2,4,6,8,10},10};
    struct Array arr2 = {5,{1,3,5,7,9},10};
    struct Array arr3 = {10,{},10};
    
    cout<<"Array A : "<<endl;
    Display(arr1);
    cout<<"Array B : "<<endl;
    Display(arr2);
    Merge(&arr1, &arr2, &arr3);
    cout<<"Merged Array : "<<endl;
    Display(arr3);
    return 0;
}

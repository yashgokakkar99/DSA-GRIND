#include<iostream>
using namespace std;

struct Array
{
    int A[5];
    int length;
    int size;
};

bool CheckSort(struct Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return false;
        }
    }
    return true;
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
    struct Array arr = {{2,200,6,8,10},5,5};
    int result = CheckSort(arr);
    cout<<result;
    return 0;
}
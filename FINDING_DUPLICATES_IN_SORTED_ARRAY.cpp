#include<iostream>
using namespace std;

struct Array
{
    int A[11];
    int length;
    int size;
};

int Duplicates(struct Array arr)
{
    int last_duplicate = 0;
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i] == arr.A[i+1] && last_duplicate != arr.A[i])
        {
            cout<<arr.A[i]<<" ";
            last_duplicate = arr.A[i];
        }
    }
}

int main()
{
    struct Array arr = {{1,2,3,4,4,5,5,5,6,7,8},11,15};
    Duplicates(arr);
}
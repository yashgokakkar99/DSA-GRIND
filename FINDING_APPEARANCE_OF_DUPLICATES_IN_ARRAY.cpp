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
    int j;
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i] == arr.A[i+1])
        {
            j = i+1;
            while(arr.A[i] == arr.A[j])
            {
                j++;
            }
            cout<<"Duplicate Element : "<<arr.A[i]<<" No. of times appeared : "<<j-i<<endl;
            i = j-1;
        }
    }
}

int main()
{
    struct Array arr = {{1,2,3,4,4,5,5,5,6,7,8},11,15};
    Duplicates(arr);
}

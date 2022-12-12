#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

int Duplicates(struct Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        int count = 1;
        if(arr.A[i] != -1)
        {
            for(int j=i+1;j<arr.length;j++)
            {
                if(arr.A[i]==arr.A[j])
                {
                    count++;
                    arr.A[j] = -1;
                }
            }
            if(count>1)
            {
                cout<<"Duplicate Element : "<<arr.A[i]<<" No. of times appeared : "<<count<<endl;
            }
        }
    }
}

int main()
{
    struct Array arr = {{8,3,6,4,6,5,6,8,2,7},10,15};
    Duplicates(arr);
}
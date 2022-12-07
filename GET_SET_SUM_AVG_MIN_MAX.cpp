#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
    int A[10];
    int length;
    int size;
};

int Get(struct Array arr, int index)
{
    return arr.A[index];
}

void Set(struct Array *arr, int index, int x)
{
    arr->A[index] = x;
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr)
{
    int sum = 0;
    for(int i=0;i<arr.length;i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

int Avg(struct Array arr)
{
    int sum = 0;
    for(int i=0;i<arr.length;i++)
    {
        sum += arr.A[i];
    }
    float avg = sum / arr.length;
    return avg;
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
    struct Array arr = {{10,25,3,47,32,94,18,64,2,6},10,10};

    bool contd = true;
	int choice;
	while(contd)
	{
		cout<<"Some common operations : "<<endl;
		cout<<"1. Get()"<<endl;
		cout<<"2. Set()"<<endl;
		cout<<"3. Max()"<<endl;
		cout<<"4. Min()"<<endl;
		cout<<"5. Sum()"<<endl;
        cout<<"6. Avg()"<<endl;
        cout<<"7. Display"<<endl;
        cout<<"8. Exit"<<endl;
		cout<<endl;
		cout<<"Enter your choice [1/2/3/4/5/6/7/8] : ";
		cin>>choice;
		if(choice == 1)
		{
			int index;
			cout<<"Enter index : ";
			cin>>index;
			int result = Get(arr, index);
            cout<<result<<endl;
		}
		else if(choice == 2)
		{
			int index;
			cout<<"Enter index : ";
			cin>>index;
            int x;
            cout<<"Enter x : ";
            cin>>x;
			Set(&arr, index, x);
		}
		else if(choice == 3)
		{
			int result = Max(arr);
            cout<<result<<endl;
		}
		else if(choice == 4)
		{
            int result = Min(arr);
            cout<<result<<endl;
		}
		else if(choice == 5)
		{
			int result = Sum(arr);
            cout<<result<<endl;
		}
        else if(choice == 6)
		{
			int result = Avg(arr);
            cout<<result<<endl;
		}
        else if(choice == 7)
		{
			Display(arr);
		}
        else if(choice == 8)
		{
			contd = false;
		}
		else
		{
			cout<<"Ooops !! incorrect choice."<<endl;
		}
	}
}
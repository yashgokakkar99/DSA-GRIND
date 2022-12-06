#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
	int A[20];
	int length;
	int size;
};

void Display(struct Array arr)
{
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<" ";
	}
    cout<<endl;
}

void Append(struct Array *arr, int x)
{
	if(arr->length < arr->size)
	{
		arr->A[arr->length] = x;
	}
	arr->length++;
}

void Insert(struct Array *arr, int index, int element)
{
	if(index>=0 && index<=arr->length)
	{
		for(int i=arr->length;i>index;i--)
		{
			arr->A[i] = arr->A[i-1];
		}
		arr->A[index] = element;
		arr->length++;
	}
}

int Delete(struct Array *arr, int index)
{
	int x;
	if(index>=0 && index<=arr->length)
	{
		x = arr->A[index];
		for(int i=index;i<arr->length-1;i++)
		{
			arr->A[i] = arr->A[i+1];
		}
		arr->length--;
	}
	return x;
}

int main()
{
	struct Array arr = {{2,4,6,8,10},5,20};
	bool contd = true;
	int choice;
	while(contd)
	{
		cout<<"Array and operations : "<<endl;
		cout<<"1. Insert"<<endl;
		cout<<"2. Append"<<endl;
		cout<<"3. Delete"<<endl;
		cout<<"4. Display"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<endl;
		cout<<"Enter your choice [1/2/3/4/5] : ";
		cin>>choice;
		if(choice == 1)
		{
			int index, x;
			cout<<"Enter index : ";
			cin>>index;
			cout<<"Enter element : ";
			cin>>x;
			Insert(&arr, index, x);
		}
		else if(choice == 2)
		{
			int ap_ele;
			cout<<"Enter element : ";
			cin>>ap_ele;
			Append(&arr, ap_ele);
		}
		else if(choice == 3)
		{
			int del_ind;
			cout<<"Enter index : ";
			cin>>del_ind;
			int a = Delete(&arr, del_ind);
			cout<<"Deleted element : "<<a<<endl;
		}
		else if(choice == 4)
		{
			Display(arr);
		}
		else if(choice == 5)
		{
			contd = false;
		}
		else
		{
			cout<<"Ooops !! incorrect choice."<<endl;
		}
	}
}
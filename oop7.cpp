#include<iostream>
using namespace std;
#define MAX 20

template<class T>

int selsort(T a[MAX])
{
	int n;
	cout<<"\nEnter the no of array variables:";
	cin>>n;
	
	cout<<"\nEnter the array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			T temp;
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	cout<<"\nArray elements in ascending order are:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
	
}

int main()
{
	int a[MAX];
	float b[MAX];
	char c[MAX];
	int ch,choice;

	do
	{
		cout<<"\nMenu\n1.Sort integer array.\n2.Sort floating point array.\n3.Sort char array.\nEnter the choice:";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				selsort(a);
				break;
				
			case 2:
				selsort(b);
				break;
				
			case 3:
				selsort(c);
				break;
			
			default:
				cout<<"\nInvalid choice.";
			
			
		}
		cout<<"\nDo you want to continue(1/0):";
		cin>>choice;
		
	}while(choice==1);
	
	return 0;
}


#include<iostream>
using namespace std;

int n;
template< class T>
void selsort(T a[],int n)
{
	T temp;
	cout<<"Enter the number of elements in the array:";
	cin>>n;
	cout<<"Enter array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[j];
					a[i]=a[j];
					a[j]=temp;
				}
			}
	}
}
template<class T>
void display(T a[],int n)
{
	cout<<"sorted array is:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
int ch;
int a[10];
float b[10];
char c[10];
	do{
		cout<<"\nMain Menu\n";
		cout<<"1.Integer type\n2.Float type\n3.char type"<<endl;
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:selsort(a,n);
				cout<<endl;
				display(a,n);
			break;
			case 2:selsort(b,n);
				cout<<endl;
				display(b,n);
			break;
			case 3:selsort(c,n);
				cout<<endl;
				display(c,n);
			break;
		}
	}while(ch!=0);
	
return 0;
}

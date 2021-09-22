#include <iostream>
using namespace std;

int swaps=0;
int comparisons=0;

void swap(int *a,int b,int c)
{   
    int temp=a[b];
    a[b]=a[c];
    a[c]=temp;
}

int partition(int *a,int start,int end)
{
    int pivot=a[end];
    int index=start;
    for(int i=start;i<end;i++)
    {   
        comparisons++;
        if(a[i]<=pivot)
        {
            swap(a,i,index);
            swaps++;
            index++;
        }
    }
    swap(a,index,end);
    return index;
}

void quicksort(int *a,int start,int end)
{
    if(start<end)
    {
        int pivot=partition(a,start,end);
        quicksort(a,start,pivot-1);
        quicksort(a,pivot+1,end);
    }
}

int main() {
    int t;
    cout<<"Input the number of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"\nInput the size of the Array"<<endl;
        cin>>n;
        int a[n];
        cout<<"Input the arrays elements"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        quicksort(a,0,n-1);
        cout<<"Sorted array = ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<"The number of comparisons = "<<comparisons<<endl;
        cout<<"The number of swaps = "<<swaps<<endl;
        comparisons=swaps=0;
    }

    return 0;
}
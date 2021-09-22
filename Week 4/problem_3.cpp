#include <iostream>
using namespace std;


void swap(int a[],int b,int c)
{
    int temp=a[b];
    a[b]=a[c];
    a[c]=temp;
}


int partition(int a[],int start,int end)
{
    int pivot=a[end];
    int index=start;
    for(int i=start;i<end;i++)
    {
        if(a[i]<=pivot)
        {
            swap(a,i,index);
            index++;
        }
    }
    swap(a,index,end);
    return index;
}


int get_k_smallest_element(int a[],int k,int low,int high)
{
    int pivot=partition(a, low, high);
    if(pivot==k-1)
        return a[pivot];
    else if(pivot<k-1)
    {
        return get_k_smallest_element(a, k, pivot+1, high);
    }
    else
    {
        return get_k_smallest_element(a, k, low, pivot-1);
    }
}

int main() {
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the size for the arrays"<<endl;
        cin>>n;
        int *a =new int(n);
        cout<<"Enter the elements"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the value for K"<<endl;
        int k;
        cin>>k;
        cout<<"The Kth smallest element in the array is "<<get_k_smallest_element(a,k,0,n-1)<<endl;
    }
    return 0;
}
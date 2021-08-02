#include <iostream>
using namespace std;


void Problem_1(int *a,int n)
{   
    int comp=0;
    int shift=0;
    for(int i=0;i<n;i++)
    {   
        int current =*(a+i);
        int j=i-1;
        while(*(a+j)>current && j>=0)
        {   
            comp++;
            shift++;
            *(a+j+1)=*(a+j);
            j--;
        }
        *(a+j+1)=current;
        shift++;
    }

    cout<<"Sorted Array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<' ';
    }
    cout<<"\nThe number of comparisons = "<<comp<<endl;
    cout<<"The number of Shifts = "<<shift-1<<endl;

}

int main() {

    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    while(t)
    {
    int a[100];
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements inside the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Problem_1(a,n);
    t--;
    }
}
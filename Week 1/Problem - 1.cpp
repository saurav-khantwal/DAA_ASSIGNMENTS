#include<iostream>
using namespace std;

bool Problem_1(int *a,int n,int key)
{
    int c=1;
    for(int i=0; i<n; i++)
    {
        if(*(a+i)==key)
        {
            cout<<"The number of comparisons = "<<c<<endl;
            return true;
        }
        c++;
    }
    cout<<"The number of comparisons = "<<n<<endl;
    return false;
}

int main()
{
    int t;
    cout<<"Enter the Number of test case"<<endl;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a[100];
        int key;
        int n;

        cout<<"Enter the size of the Array"<<endl;
        cin>>n;
        cout<<"Enter the elements inside the Arrays"<<endl;
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        cout<<"Enter the Key Element to find in the Array"<<endl;
        cin>>key;
        if(Problem_1(a,n,key))
        {
            cout<<"The element is present inside the array"<<endl<<endl;
        }
        else
        {
            cout<<"The element is not present inside the Array"<<endl<<endl;
        }

    }
}

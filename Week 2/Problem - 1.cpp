#include <iostream>
using namespace std;
int count=0;

int Problem_1(int *a,int start,int end,int key)
{   
    int i,j;    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(*(a+mid)==key)
        {    
            count++;
            i=mid-1;
            j=mid+1;
            while(*(a+i)==key && i>=0)
            {   
                count++;
                i--;
            }

            while(*(a+j)==key && j<=end)
            {   
                count++;
                j++;
            }
            break;
        }

        else if(*(a+mid)<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }

    if(count==0)
    {
        cout<<"Key not present in the Array"<<endl;
    }
    else
    {
        cout<<key<<" - "<<count<<endl;
    }
    return 0;
}



int main()
{   
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    while(t)
    {

        int a[100];
        int key;
        int n;
        cout<<"Enter the size for the array"<<endl;
        cin>>n;
        cout<<"Enter the sorted elements inside the array"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the key to find in the array"<<endl;
        cin>>key;
        Problem_1(a,0,n-1,key);
        count=0;
        t--;
    }
    return 0;
}
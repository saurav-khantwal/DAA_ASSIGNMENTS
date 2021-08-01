#include <iostream>
using namespace std;

int Problem_3(int *a,int n,int key)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(*(a+i)-*(a+j))==key)
                count++;
        }
    }
    return count;
}

int main() {
  int t;
  cout<<"Enter the number of test cases"<<endl;
  cin>>t;
  while(t)
  {
      int a[100];
      int key;
      int n;
      cout<<"Enter the size of the array"<<endl;
      cin>>n;
      cout<<"Enter the elements inside the array"<<endl;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      cout<<"Enter the key"<<endl;
      cin>>key;
      if(Problem_3(a,n,key)==0)
      {
          cout<<"No pair found"<<endl;
      }
      else
      {
          cout<<"The number of pairs = "<<Problem_3(a,n,key);
      }
      t--;
  }
}
#include<bits/stdc++.h>
using namespace std;

void find_max_occurance(char *a, int n)
{
    int c[26];
    for(int i = 0; i < 26; i++)
    {
        c[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        c[a[i] - 'a']++;
    }

    int max = 0;

    for(int i = 1; i < 26; i++)
    {
        if(c[i] > c[max])
        {
            max = i;
        }
    }

    if (c[max] == 1)
    {
        cout<<"No duplicates present"<<endl;
    }
    else
    {
        cout<<"Max occurance is of alphabet = "<<char('a' + max)<<" => "<<c[max]<<endl;
    }

}

int main() {
    int t;
    cout<<"Input the number of test cases"<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the number of elements inside the array"<<endl;
        cin>>n;
        char a[n];
        cout<<"Enter the alphabets inside the array"<<endl;
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        find_max_occurance(a, n);
    }

    return 0;
}
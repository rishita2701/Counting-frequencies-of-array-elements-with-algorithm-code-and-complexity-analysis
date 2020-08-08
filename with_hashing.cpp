#include <bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}

int main()
{
    int arr[20], n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    freq(arr, n);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (visited[i] == true)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
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


#include <bits/stdc++.h>
using namespace std;

void MaxWater(int arr[], int n)
{

    int height;
    int width;
    vector<int> area;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                height = arr[i];
                width = j - i;
                area.push_back(height * width);
            } else{
                height = arr[j];
                width = j - i;
                area.push_back(height * width);
            }
        }
    }
    cout << *max_element(area.begin(), area.end());
}

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    MaxWater(a, n);
    return 0;
}

// 1
// 8
// 6
// 2
// 5
// 4
// 8
// 3
// 7
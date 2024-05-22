#include <iostream>
#include <algorithm>

using namespace std;

int Binary_Search(int A[], int n, int key)
{
    sort(A, A+n);

    cout << "Sorted Array: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << A[i] << " ";

    }
    cout << endl;

    int start=0, end=n;

    while(start <= end)
    {
        int mid = (start+end)/2;

        if(A[mid] == key)
        {
            return mid;
        }

        else if(A[mid] > key)
        {
            end = mid-1;
        }

        else if(A[mid] < key)
        {
            start = mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter Array Length: ";
    cin >> n;

    int *A = new int[n];

    cout << "Enter Array Elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter Element to be Found in the Sorted Array: ";
    int key;
    cin >> key;

    cout << "Corresponding Index: " << Binary_Search(A, n, key);
}
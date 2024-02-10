// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//  int data;
//  Node *next;

//  Node(int data)
//  {
//   this->data = data;
//   this->next = next;
//  }
// };

// int main()
// {
//  Node *node1 = new Node(10);
//  cout << node1->data << endl;
//  cout << node1->next << endl;

//  return 0;
// }


// #include<iostream>
// using namespace std;

// int power(int a, int b) {
//     //base case
//     if( b == 0 )
//         return 1;

//     if(b == 1)
//         return a;

//     //RECURSIVE CALL
//     int ans = power(a, b/2);

//     //if b is even
//     if(b%2 == 0) {
//         return ans * ans;
//     }
//     else {
//         //if b is odd
//         return a * ans * ans;
//     }
// }

// int main() {

//     int a,b;
//     cin >> a >> b;
//     cout << endl;
//     int ans = power(a,b);

//     cout << "Answer is " << ans << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    // left part sort karna h
    mergeSort(arr, s, mid);

    // right part sort karna h
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

int main()
{

    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

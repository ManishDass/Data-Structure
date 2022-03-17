#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> example;
    example.push_back(10); // to enter element
    example.push_back(34);
    example.push_back(7);

    cout << "Element at index 2 is: " << example.at(2) << endl; // traditional square brackets with index also work

    cout << "Size of vector: " << example.capacity() << endl;

    example.pop_back(); // remove from last

    for (int i : example)
    {
        cout << i << " ";
    }
}
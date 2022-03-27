#include <iostream>
#include <vector>
using namespace std;

bool prime(int n)
{
    bool is_prime = true;
    int i;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    // loop to check if n is prime
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

void swap(int *a, int *b) // function to swap values
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(vector<int> &hT, int i)
{
    int size = hT.size();
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size && hT[l] > hT[largest])
        largest = l;
    if (r < size && hT[r] > hT[largest])
        largest = r;

    if (largest != i)
    {
        swap(&hT[i], &hT[largest]);
        heapify(hT, largest);
    }
}

void insert(vector<int> &hT, int newNum)
{
    int size = hT.size();
    if (size == 0)
    {
        hT.push_back(newNum);
    }
    else
    {
        hT.push_back(newNum);
        for (int i = size / 2 - 1; i >= 0; i--)
        {
            heapify(hT, i);
        }
    }
}

void printArray(vector<int> &hT)
{
    for (int i = 0; i < hT.size(); ++i)
        cout << hT[i] << " ";
    cout << "\n";
}

int countPrime(vector<int> &hT)
{
    int count = 0;

    for (int i = 0; i < hT.size(); ++i)
    {
        if (prime(hT[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> heapTree;

    insert(heapTree, 3);
    insert(heapTree, 4);
    insert(heapTree, 9);
    insert(heapTree, 5);
    insert(heapTree, 8);

    cout << "There are " << countPrime(heapTree) << " Prime Numbers";
}
// Write a code to find the sum of non prime numbers among n numbers

#include <bits/stdc++.h>
using namespace std;

bool PrimeOrNot(int num)
{
    int flag = 1; // initially set the flag variable to 1 bcz we are assuming that number is prime

    if (num == 0 || num == 1) // 0 and 1 are not prime
    {
        flag = 0;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++) // as we have checked for 0 and 1 so loop is starting from 2
        {
            if (num % i == 0) // if num is fully divided by i then we can call it prime number
            {
                flag = 0; // set the flag to 0 that indicates that number is not prime
                break;
            }
        }
    }
    return flag; // returning flag value if it is 0 then non prime or else prime
}

int main()
{
    int sumOfNonPrime = 0, n;

    cout << "\nHow many elements you want to enter: ";
    cin >> n;

    int arr[n]; // set the size of the array according to user

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter element " << i + 1 << ": ";
        cin >> arr[i];

        if (PrimeOrNot(arr[i]) == 0) // if function returns 0 that means number is non prime
        {
            sumOfNonPrime += arr[i]; // calculating sum of non prime numbers
        }
    }

    cout << "\nSum of non prime numbers: " << sumOfNonPrime << endl;
}

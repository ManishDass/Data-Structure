#include <bits/stdc++.h>
using namespace std;

int main()
{
    string temp = "cat";
    char tab2[1024];
    strncpy(tab2, temp.c_str(), sizeof(tab2));
    tab2[sizeof(tab2) - 1] = 0;

    for (char x : tab2)
    {
        cout << x << " ";
    }
}
#include <iostream>
using namespace std;

int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k-1) % n + 1;
}

int main()
{
    int n, k;
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the kth person to be eliminated: ";
    cin >> k;
    cout << "The position of the last person remaining is " << josephus(n, k) << endl;
    return 0;
}

//josephus prob
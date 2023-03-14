#include <iostream>
#include <vector>

using namespace std;

int mcm(vector<int> &dims, int i, int j)
{
    if (i == j)
    {
        return 0;
    }

    int minCost = INT_MAX;
    for (int k = i; k < j; k++)
    {
        int cost = mcm(dims, i, k) + mcm(dims, k + 1, j) + dims[i] * dims[k + 1] * dims[j + 1];
        if (cost < minCost)
        {
            minCost = cost;
        }
    }

    return minCost;
}

int main()
{

    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;

    vector<int> dims(n + 1);
    cout << "Enter the dimensions of the matrices: ";
    for (int i = 0; i < n + 1; i++)
    {
        cin >> dims[i];
    }

    int minCost = mcm(dims, 0, n - 1);

    cout << "Minimum cost of matrix multiplication is: " << minCost << endl;

    return 0;
}

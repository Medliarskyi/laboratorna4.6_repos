#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S, M;
    int n, k;
    M = 0;
    k = 1;

    // Цикл while
    while (k <= 10)
    {
        S = 0;
        n = 1;
        while (n <= k)
        {
            S += sin(k * n);
            n++;
        }
        M += S / k;
        k++;
    }
    cout << M << endl;

    // Цикл do-while
    M = 0;
    k = 1;
    do
    {
        S = 0;
        n = 1;
        do
        {
            S += sin(k * n);
            n++;
        } while (n <= k);
        M += S / k;
        k++;
    } while (k <= 10);
    cout << M << endl;

    // Цикл for
    M = 0;
    for (k = 1; k <= 10; k++)
    {
        S = 0;
        for (n = 1; n <= k; n++)
        {
            S += sin(k * n);
        }
        M += S / k;
    }
    cout << M << endl;

    // Останній цикл for
    M = 0;
    for (k = 10; k >= 1; k--)
    {
        S = 0;
        for (n = k; n >= 1; n--)
        {
            S += sin(k * n);
        }
        M += S / k;
    }
    cout << M << endl;

    return 0;
}
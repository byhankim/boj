#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    bool is_prime;
    int M, N;
    cin >> M >> N;
    for (int i = 2; i < M; i++)
    {
        is_prime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i != j && i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime) v.push_back(i);
    }
    for (int i = M; i <= N; i++)
    {
        is_prime = true;
        if (i == 1) i++;
        for (vector<int>::iterator it = v.begin(); it != v.end() && ((*it) * (*it) <= i); it++)
        {
            if (*it != i && i % *it == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime) 
        {
            v.push_back(i);
            cout << i << '\n';
        }
    }
    return 0;
}
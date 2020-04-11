#include <iostream>
/*#include <vector>
#include <string>

int    main(void)
{
    using namespace std;
    
    int N, X, i = 0, tmp = 0;
    string str;

    cin >> N >> X;
    cin.ignore(256, '\n');
    getline(cin, str);

    vector<int> v;
    while(str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            tmp = tmp * 10 + (str[i] - '0');
        }
        if (str[i] == ' ' || str[i + 1] == '\0')
        {
            v.push_back(tmp);
            tmp = 0;
        }
        ++i;
    }
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] < X) cout << v[i] << " ";
    }
    return (0);
}*/


/*
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0);
    int N, X, A[10005];
    cin >> N >> X;
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++)
        if (A[i] < X) cout << A[i] << ' ';
    return (0);
}*/


using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, X, tmp;
    cin >> N >> X;
    while(N--)
    {
        cin >> tmp;
        if (tmp < X)
            cout << tmp << ' ';
    }
    return (0);
}
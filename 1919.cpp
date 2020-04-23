#include <iostream>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char A[1000], B[1000];
    int min = 0, arr1[26] = { 0 }, arr2[26] = { 0 };
    cin >> A >> B;
    for (int i = 0; A[i]; i++)    arr1[A[i] - 'a']++;
    for (int i = 0; B[i]; i++)    arr2[B[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        min+= (arr1[i] - arr2[i] > 0) ? arr1[i] - arr2[i] : arr2[i] - arr1[i];
    cout << min;
    return 0;
}
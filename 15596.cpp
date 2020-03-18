#include <vector>

long long sum(std::vector<int> &a)
{
    long long ret = 0;

    for (std::vector<int>::iterator itr = a.begin(); itr != a.end(); itr++)
        ret += *itr;
    return (ret);
}

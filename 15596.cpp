#include <vector>

/*
long long sum(std::vector<int> &a);

int main(void)
{
    int              current_value, count;
    std::vector<int> v;
    while (1)
    {
        std::cin >> current_value;
        if (current_value == -1)
            break ;
        v.push_back(current_value);
    }
    count = v.size();
    std::cout << "size of vector: " << count << std::endl;
    std::cout << "return value: " << sum(v) << std::endl;
    return (0);
}
*/

long long sum(std::vector<int> &a)
{
    long long ret = 0;

    for(std::vector<int>::iterator itr = a.begin(); itr != a.end(); itr++)
        ret += *itr;
    return (ret);
}


/*long long sum(std::vector<int> &a)
{
    int         i;
    long long   sum;

    i = sum = 0;
    int count = a.size();
    while (i < count)
    {
        sum += a[i];
        i++;
    }
    return (sum);
}*/
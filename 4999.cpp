#include <iostream>
using namespace std;
int main(void)
{
    char me[1001] = {0}, dr[1001] = {0};
    std::cin >> me >> dr;
    int i = 0, mc = 0, dc = 0;
    while (me[i] == 'a') i++, mc++;
    i = 0;
    while (dr[i] == 'a') i++, dc++;
    std::cout << ((mc >= dc) ? "go" : "no");
    return 0;
}
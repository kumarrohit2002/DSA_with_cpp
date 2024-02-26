#include <iostream>
using namespace std;
bool f(int num, int *temp)
{
    // base case.......................................

    if (num >= 0 and num <= 9)
    {
        int lastdigitoftemp = (*temp) % 10;
        (*temp) /= 10;
        return (num == lastdigitoftemp);
    }

    bool result = (f(num / 10, temp) and (num % 10) == ((*temp) % 10));
    (*temp) /= 10;
    return result;
}
int main()
{
    int num = 21;
    int another = num;
    int *temp = &another;
    cout << f(num, temp);
    return 0;
}
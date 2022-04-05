#include <iostream>
using namespace std;
class Math
{
public:
    double power (double m, int n = 2)
    {
        double ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans = ans * m;
        }
        return ans;
    }
};

int main()
{
    double result = 0;
    Math pow;
    result = pow.power(3.11, 3);
    cout<<result << endl;
    result = pow.power(3.11);
    cout << result << endl;

    return 0;
}
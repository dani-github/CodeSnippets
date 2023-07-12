#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int sbor, minimum, maximum;
    minimum = min(a, b);
    minimum = min(minimum, c);
    minimum = min(minimum, d);
    minimum = min(minimum, e);
    minimum = min(minimum, f);

    maximum = max(a, b);
    maximum = max(maximum, c);
    maximum = max(maximum, d);
    maximum = max(maximum, e);
    maximum = max(maximum, f);

    sbor = ((a + b + c + d + e + f) - minimum) - maximum;
    cout << sbor / 4;

    return 0;
}

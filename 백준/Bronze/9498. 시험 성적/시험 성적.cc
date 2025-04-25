#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    char c;
    if (a >= 90) { c = 'A'; }
    else if (a >= 80) { c = 'B'; }
    else if (a >= 70) { c = 'C'; }
    else if (a >= 60) { c = 'D'; }
    else {c = 'F'; }

    cout << c << '\n';

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    double A, B, C, MEDIA;
    cin >> A;
    cin >> B;
    cin >> C;
    MEDIA = ((A*2)+(B*3)+(C*5))/10;
    cout.precision(1);
    cout << fixed << "MEDIA = " << MEDIA <<endl;
    return 0;
}

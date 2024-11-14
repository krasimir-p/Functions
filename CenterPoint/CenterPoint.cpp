#include <iostream>
#include <cmath>

double getDistance(float x, float y) {
    return sqrt(x * x + y * y);
}


using namespace std;

int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double point1Distance = getDistance(x1, y1);
    double point2Distance = getDistance(x2, y2);

    if (point1Distance <= point2Distance) {
        cout << '(' << x1 << ", " << y1 << ')' << endl;
    }
    else {
        cout << '(' << x2 << ", " << y2 << ')' << endl;
    }
    return 0;
}

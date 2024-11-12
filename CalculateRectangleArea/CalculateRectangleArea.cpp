#include <iostream>

using namespace std;

int getRectangleArea(int a, int b) {
    return a * b;
}

int main()
{
    int length, width;
    cin >> length >> width;

    cout << getRectangleArea(length, width);

    return 0;
}

#include <iostream>

int getSmallest(int x, int y) {
    int smaller;
    x < y ? (smaller = x) : (smaller = y);
    return smaller;
}

int getSmallest1(int x, int y, int z) {
    int smaller = getSmallest(x, y);
    smaller = getSmallest(smaller, z);
    return smaller;
}

int getSmallest(int x, int y, int z) {
    return  getSmallest(getSmallest(x, y), z);
}


using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << getSmallest(a, b, c);

    return 0;
}

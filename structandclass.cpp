#include <iostream>

using namespace std;

class Point2D
{
    private:
        int x;
        int y;
    public:
        void init() {
            x = 0;
            y = 0;
        }
};


int main() {
    Point2D p1;
    p1.init();

    return 0;
}
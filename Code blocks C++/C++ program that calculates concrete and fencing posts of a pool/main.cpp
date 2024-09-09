#include <iostream>
#define FENCEPRICE 1600.00;
#define PI 3.142;
#define CONCPRICE 2000.00;
using namespace std;

class pool
{
    float radius;
public:
    pool(float r)
    {
        radius = r;
    };
    float area(void)
    {
        return PI * radius * radius;
    };
    float circum(void)
    {
        return 2 * PI * radius;
    };
};

int main()
{
    float radius,fencecost,concretecost,rad;
    cout << "Enter the radius of the pool: " << endl;
    cin >> rad;

    //create 2 objects, 1 for the outer circle the other for the inner circle

    pool inner(rad);
    pool outer(radius);

    fencecost = outer.circum() * FENCEPRICE;
    concretecost = (outer.area() - inner.area()) * CONCPRICE;

    cout << "Cost for fence" << fencecost << endl;
    cout << "Cost for concrete" << concretecost << endl;

    return 0;
}

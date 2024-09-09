#include <iostream>
using namespace std;
class sample
{
    int a, b;
public:
    void setvalue(void)
    {
        a = 28;
        b = 40;
    }
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a + s.b) / 2.0;

}
int main()
{
    sample s1;
    s1.setvalue();
    cout << "The average = " << mean(s1) << endl;
    return 0;
}

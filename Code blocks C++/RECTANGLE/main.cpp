#include <iostream>
using namespace std;
 class myRectangle
 {
     int x, y;
public:
    void set_values(int,int);
    int area(void)
    {
        return x * y;
    }
    int perimeter(void)
    {
        return (x + y) * 2;
    }
 };

 void myRectangle::set_values(int a,int b)
 {
     x = a;
     y = b;
 }

 int main()
 {
     myRectangle rect,rect1,rect2;
     rect.set_values(3,4);
     rect1.set_values(12,16);
     rect2.set_values(20,40);
     cout << "area= "<<rect.area() <<endl;
     cout << "area= "<<rect1.area() <<endl;
     cout << "area= "<<rect2.area() <<endl;
     cout << "Perimeter= "<<rect.perimeter() <<endl;
     cout << "Peerimeter= "<<rect1.perimeter() <<endl;
     cout << "Perimeter= "<<rect2.perimeter() <<endl;
     return 0;
 }

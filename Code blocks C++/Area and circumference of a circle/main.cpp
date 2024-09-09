#include <iostream>
using namespace std;

class Circle {
   private:
      double radius;

   public:
      void setRadius(double r) {
         radius = r;
      }

      double getRadius() {
         return radius;
      }

      double getArea() {
         return 3.14159 * radius * radius;
      }

      double getCircumference() {
         return 2 * 3.14159 * radius;
      }
};

int main() {
   Circle circle;
   double radius;

   cout << "Enter the radius of the circle: ";
   cin >> radius;

   circle.setRadius(radius);

   cout << "The area of the circle is: " << circle.getArea() << endl;
   cout << "The circumference of the circle is: " << circle.getCircumference() << endl;

   return 0;
}

#include <iostream>
using namespace std;

class studentdet
{
    char name[30];
    int age;
    int index;
    char course[30];
public:
    void setdetails(void);
    void displaydetails(void);
};
    void studentdet::setdetails(void)
    {
        cout << "Enter your name: " <<endl;
        cin >> name;
        cout << "Age? " << endl;
        cin >> age;
        cout << "Index? " <<endl;
        cin >> index;
        cout << "course? " <<endl;
        cin >> course;
    };
    void studentdet::displaydetails(void)
    {
        cout << "NAME - " << name << endl;
        cout << "AGE - " << age << endl;
        cout << "INDEX - " << index << endl;
        cout << "COURSE - " << course << endl;
    };

int main()
{
    studentdet a;
    a.setdetails();
    a.displaydetails();
    return 0;
};

#include <iostream>
using namespace std;
class person
{
char name[30]; // or string name
int age;
public:
void setdetails(void);   //prototype
void displaydetails(void); //prototype
};
//definition of functions
void person::setdetails(void)
{
cout <<"Enter your name: " <<endl;
cin >> name;
cout <<"Enter your age: " <<endl;
cin >> age;
}

void person:: displaydetails(void){
cout <<"Name: "<< name << endl;
cout <<"AGE: "<< age <<endl;
};

int main()
{
person p;
p.setdetails();
p.displaydetails();
return 0;
}

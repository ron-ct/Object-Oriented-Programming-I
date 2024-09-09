#include <iostream>
using namespace std;
class Time
{
int hours;
int minutes;
int seconds;
public:
void gettime(int h,int m)
{
hours = h;
minutes = m;
}

void puttime(void)
{
cout << hours << "HOURS AND " << minutes << "MINUTES" ;
cout << seconds << "SECONDS" << endl;
}
void sum(Time t1,Time t2); //prototype                object t1 & t2 recieved is of the type Time.
};
void Time::sum(Time t1,Time t2)   //   -->no semicolon!
{
seconds = t1.seconds + t2.seconds;
minutes = seconds / 60;
seconds = seconds % 60;
minutes = t1.minutes + t2.minutes;
hours = minutes / 60;
minutes = minutes % 60;
hours = hours + t1.hours + t2.hours;
}

int main()
{
Time T1,T2,T3; // -->3 objects
T1.gettime(2,30);
T2.gettime(1,37);
T3.sum(T1,T2);
cout << "T1 = ";
T1.puttime();
cout << "T2 = ";
T2.puttime();
cout << "T3= ";
T3.puttime();
return 0;
};

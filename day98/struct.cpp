#include<iostream>
using namespace std;
struct Distance{
    int feet;
    float inch;
};
void engldisp(Distance);
void engldisp(float);
int main()
{
    Distance d1;
    float d2;
    cout << "Enter the feet: ";
    cin>>d1.feet;
    cout << "Enter the inch: ";
    cin >> d1.inch;

    cout << "Enter the Distance: ";
    cin >> d2;
    engldisp(d1);
    engldisp(d2);
}
void engldisp(Distance dd)
{
    cout << "Distance in feet: " << dd.feet << "Distance in inch: " << dd.inch << endl;
}
void engldisp(float d2)
{
    cout << d2 << endl;
}
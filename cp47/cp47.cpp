// this program is the demo of friend function where we use that friend function to access the values of
// two different classes and print its sum.

#include<iostream>
using namespace std;
class B;
class A{
    int a = 3;
    public:
    friend void add(A obj1 , B obj2);
};
class B{
    int b = 4;
    public:
    friend void add(A obj1 , B obj2);
};
void add(A obj1 , B obj2)
{
    cout << "The sum is:" << obj1.a + obj2.b << endl;
}
int main()
{
    A obj1;
    B obj2;
    add(obj1,obj2);
    cout << " hi mom" << endl;
}
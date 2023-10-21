
#include <iostream>
using namespace std;
class BC
{
    int x , y;
   public:
   BC(int a  , int b)
   {
    x = a;
    y =b;
    cout << "This is the parametarized constructor of base class" << endl;
   }
   ~BC(){
    cout << "Destructor of BC class called" << endl;
   }
   void showXY()
   {
    cout << "This is the value of x and y: " << x << " and " << y << endl;
   }
};
class DC : public BC
{
    int z;
public:
    DC(int a,int b , int c) : BC(b,c) // --> if i was not writing this line then the compiler writes the BC() line automatically
    {
        z = a;
        cout << "Hello this is Derived class constructor" << endl;
    }
    ~DC(){
        cout << "Destructor of derived class called" << endl;
    }
    void showZ()
    {
        cout << "This is the value of z: " <<  z << endl;
    }
};
int main()
{

    DC obj1(1,2,3);
    obj1.showZ();
    obj1.showXY();
    return 0;
}
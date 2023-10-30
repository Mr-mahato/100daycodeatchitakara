/* In this program i am gonna use the concept of dynamic memory allocation and practice some concept regarding that : */
// source link : https://www.youtube.com/watch?v=wopESdEVJs4&ab_channel=PortfolioCourses
#include<iostream>
using namespace std;
class A{
    public:
   string name;
    void print()
    {
        cout << name << endl;
    }
};
int main()
{
    int *samp = new int(10);
    // *samp = 4;
    cout << "Address: " << samp << endl;
    cout << " Value: " << *samp << endl;

    // lets take array example
    int *array = new int[2];
    array[0] = 10;
    array[1] = 20;
    for(int i = 0;i<2;i++)
    {
        cout << array[i] << " " ;
    }

    delete samp;
    // for deleting the array from the heap
    delete[] array;
    cout << endl;

    A *obj1 = new A;
    obj1->name = "chandu";
    obj1->print();   
}
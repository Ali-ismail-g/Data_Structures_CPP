#include <iostream>
//#include <>
using namespace std;

int main()
{
    //Dynamic Allocation
    int n;
    float *ptr;//variable has an address of another variable
    cout<<"enter the size of the array"<<endl;
    cin>>n; // dynamic allocation as size is not determined before the run time
    ptr = new float[n]; // after using new, it will store array in heap as size change dynamically and not static
    //now ptr has an address that defined in heap as main can't access array in heap without ptr located in stack but it can access stack
    delete [] ptr; //delete array stored in heap to avoid over storage heap to be used by another programs in java there's automatic java garbage
    return 0;
}

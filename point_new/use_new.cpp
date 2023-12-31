//use_new.cpp -- using the new operator
#include <iostream>
int main()
{
    using namespace std;
    int *pt = new int;            //allocate space for an int
    *pt = 1001;                   //store a value there
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << " size of *pt = " << sizeof(*pt)<< endl;

    double *pd = new double;      //allocate space for a double
    *pd = 10000010.0;             //store a value there
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;  
    cout << "size of pd = " << sizeof(pd);
    cout << " size of *pd = " << sizeof(*pd)<< endl;   
    delete pt;                 //free pt
    delete pd;                 //free pd
    return 0;
}
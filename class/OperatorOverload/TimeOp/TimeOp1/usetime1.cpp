//usetime0.cpp -- using the second draft of Time class
//compile usetime1.cpp and time1.cpp together
#include <iostream>
#include "time1.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "coding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    //operator natation
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

    Time morefixing(3,28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    //function natation
    cout << "morefixing.operator(tatol) = ";
    total.Show();
    cout << endl;

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double distanceD,heightH,ht,angle;
    //ht is the height of the tree;

    const double PI= 3.142;
    int halfCycle=180;

    cout<<"Enter distance D in feet:";
    cin>>distanceD;

    cout<<"Enter height H in inches:";
    cin>>heightH;

    cout<<"Enter the angle of theta in degrees:";
    cin>>angle;

    ht=heightH+distanceD*tan(angle*PI/halfCycle);
    cout<<"The height of the tree:"<<ht<< "feet";




    return 0;
}

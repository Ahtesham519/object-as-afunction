//objfunc.cpp
//demonstrates constructors,adds objects using member function

#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Distance    //English Distance class
{

private :

int feet;
float inches;

public :

Distance() : feet(0), inches(0.0)
{  }

Distance(int ft, float in) : feet(ft),inches(in)
{  }

void getdist()                     //get length from user
{
cout<<"\nEnter feet: ";  cin>>feet;
cout<<"\nEnter inches "; cin>>inches;
}

void showdist()          //display distance
{cout<<feet <<"\ "<<inches <<"\ "; }

void add_dist(Distance,Distance );   
///---------------------------------------------------------------------------------------
};
void Distance::add_dist(Distance d2, Distance d3)
{
inches = d2.inches + d3.inches;   //add the inches
feet =0;                                   //for possible carry
if(inches >= 12.0)                     //if total exceds 12.0
{
inches = 12.0;                         //by 12.0 and
feet++;                                           //increases feet
}                                                      //by 1
feet += d2.feet  + d3.feet;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
Distance dist1,dist3;       //define the two lengths
Distance dist2(11,6.25);     //define and initilize dist2

cout<<"\ndist1 = ";  dist1.showdist();
cout<<"\ndist2 = "; dist2.showdist();
cout<<"\ndist3 = "; dist3.showdist();

cout<<endl;

return 0;
}

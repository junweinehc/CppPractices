#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int dice=0;

    //srand gives the random function a new seed, a starting point
    srand(time(0));
    // gives the time in seconds since the Unix epoch, 
    //which is a pretty good "unpredictable" seed 

    dice=(rand()%10)+1;
    cout<<"random number is "<<dice<<endl;

}
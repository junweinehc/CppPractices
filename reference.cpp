#include <iostream>

using namespace std;

void passCopy(int x);
void passReference(int *y);

int main()
{
    int lisa = 6;
    int jj = 2;
    passCopy(lisa);
    passReference(&jj);

    cout << "Lisa: " << lisa << endl;
    cout << "jj: " << jj << endl;

}

void passCopy(int x)
{
    x=10;
}

void passReference(int *y)
{
    *y=8;
}
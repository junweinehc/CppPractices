#include <iostream>

/* WHENEVER  working with recurrsive functions. You NEED to have a BASE case
    such as "return 1;". Reason is it will stop the function for you 
    when condition is met. */

using namespace std;

int prim(int x){
    //cout << "Enter numer, make it small: " << endl;
    if (x==1){
        return 1;
    }else{
        return x*prim(x-1);
    }
}

int main(){
    cout << prim(6) << endl;
}

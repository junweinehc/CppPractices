#include <iostream>
#include <string>
using namespace std;


class junwei_class{
    public:
        junwei_class(string y){
            name=y;
        }

        void setName(string x){
            name=x;
        }

        string getName(){
            return name;
        }

    private: // no job for you if you make variables public lool
        string name;
};

int main(){

    junwei_class jc("\nYou will get there");
    cout << jc.getName();
    /*jc.setName("\nYou will get there\n");
    cout << jc.getName();*/

    return 0;



    /*jc.setName(" \nKeep it up, Please don't give up Junwei");
    jc.getName();
    cout << jc.getName();
    return 0;*/
}











/*class JunweiClass{
    public:
        void coolSaying(){
         //cout << "The size of float: " << sizeof(float) << endl;
            cout << "Hi \x4do\155!\n" << endl;
    
      }
}
;
int main()
{
    JunweiClass jcobject;
    jcobject.coolSaying();
    return 0;
}*/
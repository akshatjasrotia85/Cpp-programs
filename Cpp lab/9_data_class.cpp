#include <iostream>
using namespace std;
class data {
    public:
     int r;
     float vol(){
        return ((4/3)*(22/7)*r*r*r);
     }
};
int main(){
    data a;
    cout<<"enter radius:";
    cin>>a.r;

cout<<"volume of sphere is "<<a.vol();
    
return 0;
}
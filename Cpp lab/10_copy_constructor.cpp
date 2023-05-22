#include <iostream>
using namespace std;
class rectangle{
    public:
    rectangle(){
        cout<<"hi"<<endl;
    }
    rectangle(const rectangle &a){
        cout<<"inside copy constructor\n";
    }
};
int main(){
    rectangle a,b(a);
    
return 0;
}
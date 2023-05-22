// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int width;

public:
    int area()
    {
        return length * width;
    }
    rectangle()
    {
        cout << "enter width and length";
        cin >> width >> length;
        cout << "area is:" << area();
        cout << endl;
    }
    ~rectangle(){
        cout<<"end\n";
    }
};

int main()
{
    rectangle r1;

    return 0;
}

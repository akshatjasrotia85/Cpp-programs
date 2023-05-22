#include <iostream>
using namespace std;
class array
{
private:
    int n;
    int arr[];// name can't be same as class and no need of size

public:
    array()
    {
        cout << "enter size of array:";
        cin >> n;
    }
    void set()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "enter a[" << i + 1 << "]:";
            cin >> arr[i];
        }
    }
        void show()
        {
            cout << "{";
            for (int i = 0; i < n-1; i++)
            {
                cout<<arr[i]<< ",";
            }
            cout << arr[n-1] <<"}";
        }
};
int main()
{
    array a;
    a.set();
    a.show();
    return 0;
}
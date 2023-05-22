#include <iostream>
using namespace std;
// just make the list of student ..okay👌
class Studinfo
{
public:
    char name[20];
    int rollno;

    void input1();
    void output1();

    void input()
    {
        cin >> name;
        cin >> rollno;
    }

    void output()
    {
        cout << "the entered name is " << name << " and roll number is " << rollno;
    }

    // Studinfo()
    // {
    //     cout << "Hi!!!";
    // }
};

void Studinfo::input1()
{
    cout << endl
         << "enter name and roll number: ";
    cin >> name >> rollno;
}

void Studinfo::output1()
{
    cout << "name is " << name << "\t";
    cout << "roll number is " << rollno<<endl;
}

int main()
{
    int n;
    cout << "enter number of students:";
    cin>>n;
    Studinfo R[n];
    for (int i = 0; i < n; i++)
    {
        // cout << endl
        //      << "enter name and roll number: ";
        // R[i].input();
        // R[i].output();
        R[i].input1();
      
    }
    for (int i = 0; i < n; i++)
    {
        // R[i].input();
        // R[i].output();
          R[i].output1();
      
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class hello
{
    public:
        string name;
        int roll;
        float marks;

        void accept()
        {
            cout<<"Enter Name:";
            cin>> name;

            cout<<"Enter Roll No:";
            cin>> roll;

            cout<<"Enter marks:";
            cin>> marks;
        }

        void display()
        {
            cout<<"\nName:" <<name <<endl;
            cout<<"\nRoll No:" <<roll <<endl;
            cout<<"\nMarks:" <<marks <<endl;
        }
};

int main()
{
    hello h;
    h.accept();
    h.display();
    return 0;
}

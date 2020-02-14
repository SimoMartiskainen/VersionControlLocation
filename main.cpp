#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>


using namespace std;

#define pulse_error 2.41e-3

// Global Variable declaration
int a;
float testfloat;
string mystring;
int StartNumber;


void odd (int a);
void even (int a);

struct PersonData{
    int age;
    int height;
    float weight;
};


class ModeSelection{
    int x, y;
  public:
   int define_sign(float);
};


int ModeSelection::define_sign(float a)
{
    if (a > 0)
        return(1);
    else if (a==0)
        return(0);
    else
        return(2);
}

class ChooseEdges
{
    int x, y;
  public:
   int define_sign(float);
};



int main()
{

    ModeSelection   Modedef;
    int mode;
    string Execution = "N";
    float velocity;


    while(Execution != "Y")
    {
        cout<< "Insert velocity"<<endl;
        cin >> velocity;
        mode = Modedef.define_sign(velocity);
        cout << "Mode is "<<mode<<endl;
        cout<< "Do you want to exit (Y/N)"<<endl;
        cin >> Execution;
    }


    return 0;
}




////////// DO NOT EDIT HEADER! //////////
#include "CImg.h"        //
#include "CTurtle.hpp"   //
#include <iostream>      //
using namespace cturtle; //
using namespace std;     //
/////////////////////////////////////////

int main(int argc, char **argv)
{

    TurtleScreen screen(400, 300); // You may edit the dimensions to fit your window
    Turtle tina(screen);
    tina.speed(TS_SLOWEST);

    // add code below this line
    for (int i = 0; i < 3; i++)
    {
        tina.forward(100);
        tina.left(120);
    }

    // add code above this line

    screen.exitonclick();
    return 0;
}

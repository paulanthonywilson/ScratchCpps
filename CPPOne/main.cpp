#include <iostream>
#include "MyAwkwardClass.h"
#include "MyStub.h"

#define MyAwkwardClass MyStub

int main (int argc, const char * argv[])
{

    MyAwkwardClass ma;
    
    ma.doSomething();
    
    return 0;
}


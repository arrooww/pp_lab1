#include "processing.h"
#include "input.h"
#include "print.h"

int main(int argc, char* argv[])
{
    for (int i=0; i<argc; i++)
    {
        if (argv[i][1] == 'd')
        {
            random();
            print();
            debug();
        }
        if (argv[i][1] == 'r')
        {
            sorted();
            print();
            release();
        }
    }
}


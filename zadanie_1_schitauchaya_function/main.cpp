#include <iostream>

static int count = 0;

void counting_function( )
{
    count++;

    std::cout << "function called at " << count << std::endl;
}

int main( int argc, char** argv )
{
    for ( int i = 0; i < 15; i++ )
    {
        counting_function( );
    }
}
#include <iostream>

void counting_function( )
{
    static int count = 0;

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
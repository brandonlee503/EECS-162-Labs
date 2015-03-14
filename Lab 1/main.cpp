#include <cstdlib>

#include "tables.h"


int main(int argc, char *argv[])
{
    //Make sure user parameters are valid
    if(validate_input(argc, argv))
    {
        //Create our table
        table **t = create_table(atoi(argv[1]), atoi(argv[2]));
        
        //Output the results
        display_table(&t, atoi(argv[1]), atoi(argv[2]));
    }
    else
    {
        //Show user usage information
        usage(argv[0]);
    }
}
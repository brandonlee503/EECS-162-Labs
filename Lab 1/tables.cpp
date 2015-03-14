#include <iostream>
#include <cstdlib>
#include <iomanip>

#include "tables.h"

using namespace std;

/*********************************************************************
 ** Function: validate_input
 ** Description: Validates the user's paramters
 ** Parameters: Argument information
 ** Preconditions: Argments have been passed
 ** Return: Status of parameter validation
 *********************************************************************/
bool validate_input(int argc, char *argv[])
{
    //Did the user input any command line args?
    if(argc > 2)
    {
        //Did the user give use integers? ASCII 49 - 57 (1-9)
        if((*argv[1] >= 49 && *argv[1] <= 57) && (*argv[2] >= 49 && *argv[2] <= 57))
        {
            return true;
        }
    }
    
    return false;
}

/*********************************************************************
 ** Function: create_table
 ** Description: Creates the struct 2D array representing the table
 ** Parameters: Row and col size
 ** Preconditions: Parameter values have been validated
 ** Return: The created 2D struct array
 *********************************************************************/
table **create_table(int m, int n)
{
    //Create our dynamic table 2D struct array
    table **t = new table*[m];
    
    //Add second array -- 2D yo!
    for(int i = 0; i < n; i++)
    {
        t[i] = new table[n];
    }
    
    
    //Set our table values
    set_mult_values(&t, m, n);
    set_div_values(&t, m, n);
    
    //Return our table of pointless numbers!
    return t;
}

/*********************************************************************
 ** Function: set_mult_values
 ** Description: Sets the multi values of an elements of the 2D struct array
 ** Parameters: Pointer to our 2D struct array, Row and col size
 ** Preconditions: Parameter values have been validated
 *********************************************************************/
void set_mult_values(table ***t, int m, int n)
{
    //Pointer to our 2D struct array
    table **tbl = &**t;
    
    for(int r = 0; r < m; r++)
    {
        for(int c = 0; c < n; c++)
        {
            //Outter table
            if(r == 0 || c == 0)
            {
                tbl[r][c].multi = r+1 * c+1;
            }
            
            //Inner table
            else
            {
                tbl[r][c].multi = tbl[0][c].multi * tbl[r][0].multi;
            }
        }
    }
}

/*********************************************************************
 ** Function: set_div_values
 ** Description: Sets the division values of an elements of the 2D struct array
 ** Parameters: Pointer to our 2D struct array, Row and col size
 ** Preconditions: Parameter values have been validated
 *********************************************************************/
void set_div_values(table ***t, int m, int n)
{
    //Pointer to our 2D struct array
    table **tbl = &**t;
    
    for(int r = 0; r < m; r++)
    {
        for(int c = 0; c < n; c++)
        {
            //Outter table
            if(r == 0 || c == 0)
            {
                tbl[r][c].division = r+1 * c+1;
            }
            
            //Inner table
            else
            {
                tbl[r][c].division = tbl[0][c].division / tbl[r][0].division;
            }
        }
    }
}

/*********************************************************************
 ** Function: display_table
 ** Description: Outputs the table
 ** Parameters: Pointer to our 2D struct array, and its size
 ** Preconditions: Table has been filled with valid data
 *********************************************************************/
void display_table(table ***t, int m, int n)
{
    //Pointer to our 2D struct array
    table **tbl = &**t;
    
    //Multiplication Table
    cout << "Multiplication Table: " << endl;
    for(int r = 0; r < m; r++)
    {
        for(int c = 0; c < n; c++)
        {
            //Output number
            //Output number
            cout << setprecision(2) << setw(6) << tbl[r][c].multi << " ";
        }
        
        cout << endl;
    }
    
    //Division Table
    cout << endl << "Division Table: " << endl;
    for(int r = 0; r < m; r++)
    {
        for(int c = 0; c < n; c++)
        {
            //Output number
            cout << setprecision(2) << setw(6) << tbl[r][c].division << " ";
        }
        
        cout << endl;
    }
}

/*********************************************************************
 ** Function: usage
 ** Description: Output command line requirements
 ** Parameters: File name of application
 ** Pre-Conditions: filename conains data
 *********************************************************************/
void usage(char *file)
{
    cout << "Usage: " << file << " m n" << endl;
    cout << "\t m is the row size of the table" << endl;
    cout << "\t n is the col size of the table" << endl;
    cout << "\t\t m and n must be integer values 1-9" << endl << endl;
}
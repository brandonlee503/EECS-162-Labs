//Struct for multi/division table
struct table
{
    int multi;
    double division;
};

//Function declarations
bool validate_input(int argc, char *argv[]);
table **create_table(int m, int n);
void set_mult_values(table ***t, int m, int n);
void set_div_values(table ***t, int m, int n);
void display_table(table ***t, int m, int n);
int num_digits(double num);
void usage(char *file);

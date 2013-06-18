#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <General_Notation.h>

class File_Manager
{
public:
    File_Manager();

    /*Setter functions*/
    void set_input_file(string);
    void set_expected_out_file(string);
    void set_output_file(string);
    void set_weights_file(string);

    /*Getter functions*/
    string get_read_ex_output_string();
    string get_input_population_string();
    string get_output_population_string();
    string get_rank_output_strings(int);

private:
    ofstream write;
    ifstream read;
    string read_ex_output_string;
    string input_population_string;
    string output_population_string;
    string input_file;
    string expected_out_file;
    string output_file;
    string weights_file;
    string rank_output_strings[output_l];

    void do_function(int);
    void read_input(string);
    void read_expected_output(string);
    void read_weights(string);
    void write_output(string);
    void write_weights(string);
    string convertInt(int);

};

#endif // FILEMANAGER_H

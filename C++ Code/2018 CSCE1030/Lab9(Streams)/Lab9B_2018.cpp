#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void get_stream(ifstream& in_s, ofstream& out_s);

int main(){
    char  c;
    ifstream  in_s;
    ofstream out_s;

    get_stream(in_s, out_s);
    in_s.get(c);

    cout << "*** Here is the contents of the input file ***" << endl;

    while(!in_s.eof()){
        out_s.put(c);
        in_s.get(c);
    }

    cout << endl << "***  Done writing the contents of the file ***" << endl;
    in_s.close();

    return 0;
}

void get_stream(ifstream& in_s, ofstream& out_s){
    char input_file[15];
    char output_file[15];

    cout << "Please enter the name of the input file"
}

#include<iostream>
using namespace std;

// 6A first second 3rd
// Number of command-line arguements: 4
// Arguement #0: _6A_
// Arguement #1: _first_
// Arguement #2: _second_
// Arguement #3: _3rd_

int main(int argc, const char * argv[]){
    cout << "Number of command-line arguements: " << argc << endl;
    for(int i = 0; i < argc; i++){
        cout << "Arguement #" << i << ": _" << argv[i] << "_\n";
    }
    return 0;
}

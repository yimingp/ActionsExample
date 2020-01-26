#include <iostream>
#include <fstream>

using std::ofstream;
using std::ifstream;
using std::cout;
using std::endl;

int main(int argc, char **argv) {

    cout << "Printing the command line args..." << endl;
    for (int i = 0; i < argc; i++)
        cout << "arg[" << i << "] = " << argv[i] << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Hello CS Elite Coders! " << i << endl;
    }

    ifstream fin(argv[1]);
    if (!fin) {
        cout << "Cannot open file" << endl;
    }

    char buffer[80];
    while (fin >> buffer) {
        cout << buffer << endl;
    }
    fin.close();

    ofstream fout("myfile.txt");
    if (!fout) {
        return -1;
    }

    fout << "Hello world from a file!" << endl;
    fout.close();

    return 0;
}

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

    ofstream fout(argv[3]);
    ofstream fout2(argv[4]);
    if (!fout) {
        return -1;
    }

    fout << "Goodbye from a file!" << endl;
    fout2 << "some other text in this output file" << endl;
    fout.close();
    fout2.close();

    return 0;
}

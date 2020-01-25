#include <iostream>
#include <fstream>

using std::ofstream;
using std::cout;
using std::endl;

int main() {
  for (int i = 0; i < 10; i++) {
    cout << "Hello CS Elite Coders! " << i << endl;
  }

  ofstream fout ("myfile.txt");
  if (!fout) {
      return -1;
  }

  fout << "Hello world from a file!" << endl;
  fout.close();

  return 0;
}

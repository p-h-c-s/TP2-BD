#include <iostream>
#include "definitions.h"
#include "hashFile.h"

// 1.549.146 registros
int main(int argc, char const* argv[]) {
  if (argc == 1) {
    cout << "No input file -- exiting." << endl;
    return 0;
  }
  int id = stoi(argv[1]);
  cout << "id entrada: " << id << endl;
  HashFile hash(false);
  Line* pLine = hash.getLineFromBlock(id);
  cout << endl << pLine->titulo << endl;
  hash.closeFile();
  return 0;
}
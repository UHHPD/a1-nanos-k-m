#include <fstream>
#include <iostream>

int main() {
  int a, b;
  std::ofstream fout("datensumme.txt");
  std::ifstream fin("daten.txt");
  for (int d = 1; d < 235; ++d) {
    fin >> a >> b;
    int c = a + b;
    fout << c << std::endl;
    //std::cout << a << " + " << b << " = " << c << std::endl;
  }
  fin.close();
  fout.close();
}

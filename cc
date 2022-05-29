#include <iostream>
#include <fstream>
#include <cmath>

int main() {
  std::ifstream fin1("datensumme.txt");
  
  double a,N = 0;
  for (int d=1; d < 235; ++d){
    fin1 >> a;
    N = N + a;
  }
  //std::cout << N << std::endl;
  double avr = N/234;
  std::cout << "Mittelwert: " << avr << std::endl;
  fin1.close();
  
  std::ifstream fin2("datensumme.txt");
  double b,dif,var = 0;
  for (int d=1;d < 235; ++d){
    fin2 >> b;
    dif = ( b - avr )*(b - avr) + dif;
  }
  var = dif/234;
  std::cout << "Varianz: " << var << std::endl;
  fin2.close();
  double sig = sqrt(var);
  std::cout << "Standardabweichung: " << sig << std::endl;
}
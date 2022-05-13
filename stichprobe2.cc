#include <iostream>
#include <fstream>
#include <cmath>

int main() {
  std::ifstream fin1("datensumme.txt");
  std::ifstream fin2("datensumme.txt");
  std::ofstream fout1("mittelwerte.txt");
  std::ofstream fout2("varianzen.txt");
  double b,dif,var,a,N = 0;
  for (int d=1; d < 27; ++d){
    N = dif = var = 0;
    for (int e=1; e < 10; ++e){
     fin1 >> a;
      N = N + a;
     }
    //std::cout << N << std::endl;
    double avr = N/9;
    //std::cout << d << "ter Mittelwert: " << avr << std::endl;
    fout1 << avr << std::endl;

    for (int e=1;e < 10; ++e){
      fin2 >> b;
     dif = ( b - avr )*(b - avr) + dif;
    }
    var = dif/9;
    //std::cout << d << "te Varianz: " << var << std::endl;
    fout2 << var << std::endl;
    double sig = sqrt(var);
    //std::cout << d << "te Standardabweichung: " << sig << std::endl;
    //std::cout << std::endl;
  }
  fin1.close();
  fin2.close();
  fout1.close();
  fout2.close();
  std::ifstream fin3("mittelwerte.txt");
  std::ifstream fin4("varianzen.txt");
  double f,P,g,Q = 0;
  for (int d=1; d < 27; ++d){
    fin3 >> f;
    fin4 >> g;
    P = P + f;
    Q = Q + g;
  }
  double avravr = P/26;
  double avrvar = Q/26;
  std::cout << "Mittelwert der 26 Mittelwerte: " << avravr << std::endl;
  std::cout << "Mittelwert der 26 Varianzen: " << avrvar << std::endl;
  fin3.close();
  fin4.close();
}
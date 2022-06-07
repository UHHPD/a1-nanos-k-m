#include <iostream>
#include <cmath>

double zufall(){
  int a = 205;
  int c = 29573;
  int m = 139968; 
  int static I_k = 7 ;
  I_k = (a*I_k + c)%m;
  double u_k = (double)I_k/(double)m;
  return u_k;
}

int main(){
  int N = 1000000;
  int N_in = 0;
  
  for(int j = 1; j<N+1 ; j++){
    double x_j = 2*zufall()-1;
    double y_j = 2*zufall()-1;
    if (sqrt(x_j*x_j+y_j*y_j) <= 1){
      N_in++;
    }
    if (j == N){
      //double E = M_PI/4 * (double)N;
      //double V = M_PI/4 * (1- M_PI/4)*(double)N;
      //std:: cout << "N = " << N << std::endl;
      //std:: cout << "E[N_in] = " << E << std::endl; 
      //std:: cout << "V[N_in] = " << V << std::endl;
      //std:: cout << "N_in= " << N_in<< std::endl;
      //std:: cout << "berechnetes pi = " << 4*(double)N_in/(double)N << std::endl;
      std:: cout << 4*(double)N_in/(double)N << std::endl;
      //std:: cout << "sigma_pi = " << 4* sqrt(V)/(double)N << std::endl;
      //std:: cout << "pi wahrer Wert: " << M_PI << std::endl;
    }
  }
}

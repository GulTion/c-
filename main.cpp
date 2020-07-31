//Tayler of exp


#include <iostream>
using namespace std;


double exp(int x, int n){
  static double s=1;
  if(n==0)
    return s;
  s=1+x*s/n;
  return exp(x,n-1);
};


int main(){
  printf("%.10lf \n",exp(1,15));
  return 0;
}
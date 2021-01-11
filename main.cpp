#include <iostream>
#include<stdio.h>
using namespace std;

double e(int x, int n){
  static double power = 1;
  static double factorial = 1;
  double result;
  if(n == 0){
    return 1;
  }else{
    result = e(x, n -1);
    power = power * x;
    factorial = factorial * n;
    return result + power/factorial;
  }
}

int main() {
  double result;
  result = e(1, 10);
  cout <<result<<endl;
}
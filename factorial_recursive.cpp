#include<iostream>
using namespace std;

int main(){

 int factorial(int);
  int fact,num;
  cout << "Enter any Number:";
  cin >> num;

  fact = factorial(num);
  cout << "Factorial of a number:"<<fact<<endl;
  return 0;
}

int factorial(int n){

  if(n<0)
  return(-1);//wrong value
 if(n==0)
 return(1);
  else{
    return(n*factorial(n-1));
  }
}

#include<iostream>
using namespace std;
int main(){

int n1=0,n2=1,n3,i,num;
std::cout << "Enter the Number" << '\n';
std::cin >> num;

for (size_t i = 0; i < num; i++) {

  n3 = n1+n2;
  std::cout << n3 << '\n';
  n1 = n2;
  n2 = n3;
}

return 0;

}

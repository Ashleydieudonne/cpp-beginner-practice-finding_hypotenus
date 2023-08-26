#include <iostream>
#include <cmath>
using namespace std;


int main(){
   double a;
   double b;
   double c;
   cout << "a: ";
   cin >> a;
   cout << "b: ";
   cin >> b;

   a = pow(a,2); 
   b = pow(b,2);
   c = a + b;
   c = sqrt(c);

   cout << "Hypotenus: " << c;
   


   
   





    return 0;
}
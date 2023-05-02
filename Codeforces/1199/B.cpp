#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   double L, H;
   cin >> H >> L;
   cout << fixed << setprecision(10) << (L*L-H*H)/(2*H);
   return 0;
}

// %%writefile afsd.cpp   <- quitar //

/* Based on https://www.linkedin.com/pulse/lets-solve-maximum-pairwise-product-algorithm-problem-okpala, on April 10, 2021 by rsierraa. */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int max1 = 0;                                                               //1
    int max2 = 0;                                                               //1
    cin >> n;                                                                   //1

    for (int i = 0; i < n; ++i) {                                               //1 + 2n
        cin >> element;                                                         //1

      if (element > max1){                                                      //1
        max2 = max1;                                                            //[0, n]
        max1 = element;                                                         //[0, n]
      }

      else if (element > max2){                                                 //1
        max2 = element;                                                         //[0, n]
      }
    }

    cout << (long long) max1*max2 << "\n";                                      /1

    return 0;                                                                   
                                                                                // total 8 + 2n + [0, 3n]
}

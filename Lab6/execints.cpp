//%%writefile super_countexecs.cpp

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

long long execints = 0LL;

int m;

int main() {

    int max1 = 0;                                                               //1
    execints++;
    int max2 = 0;                                                               //1
    execints++;
    int n, element;                                                             //2
    execints += 2;
    cin >> n;                                                                   //1
    execints++;

    execints++;
    for (int i = 0; i < n; ++i) {                                               //1 + 2n
        execints+= 2;
        cin >> element;                                                         //1
        execints++;
  
      if (element > max1){                                                      //1
        max2 = max1;                                                            //[0, n]
        execints++;
        max1 = element;                                                         //[0, n]
        execints++;
        m += 2;
      }

      else if (element > max2){                                                 //1
        max2 = element;                                                         //[0, n]
        execints++;
        m++;
      }
    }

    cout << m << "\n";


    execints++;
    cout << (long long) max1 * max2 << "\n";                                    //1

    cout << execints << "\n";

    return 0;                                                                   //----------------------
                                                                                //10 + 2n + [0, 3n]
}

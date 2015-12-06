#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){

    cout << "n e" << endl;
    cout << "- -----------" << endl;
    double solution;

    for (double n = 0.0; n < 10; n++){
        double factorial = 1;
        
        for (double i = 0.0; i<=n; i++){
            if (i == 0)
                factorial = 1;
            else
                factorial *= i;
        }

        solution += 1.0/factorial;
        cout << n << " " << setprecision(10) << solution << endl;
    }

    return 0;
}

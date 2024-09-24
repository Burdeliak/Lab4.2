#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    double X_s, X_e, dX;

    cout << " X_s: ";
    cin >> X_s;
    cout << " X_e: ";
    cin >> X_e;
    cout << " dX: ";
    cin >> dX;

    cout << "-------------------------------" << endl;
    cout << "|    x    |        y          |" << endl;
    cout << "-------------------------------" << endl;
    
    for (double x = X_s; x <= X_e; x += dX) {
        double y;

        if (x < 0) {
            y = 1 + 4 * pow(x, 2);  
        }
        else if (x >= 0 && x <= 2) {
            y = pow(exp(x) + fabs(x), 2);  // y = (e^x + |x|)^2, ÿךשמ 0 <= x <= 2
        }
        else {
            y = 5 * sin(pow(x, 2) + 1);  // y = 5sin(x^2 + 1), ÿךשמ x > 2
        }

        cout << "| " << x << " | " << y << " |" << endl;
    }

    cout << "-------------------------------" << endl;

    return 0;
}
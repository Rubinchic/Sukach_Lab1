#include <iostream>
using namespace std;

int main() {
    double weight, height, result;
    cout << "Write your weight (kg): ";
    cin >> weight;
    cout << "Write your height (m): ";
    cin >> height;
    result = weight / (height * height);

    if (result < 18.5) {
        cout << "Not enough weight" << "\n";
    } else if (result >= 18.5 && result < 24.9) {
        cout << "Normal" << "\n";
    } else if (result >= 25 && result < 29.9) {
        cout << "Obese (class I)" << "\n";
    } else if (result >= 30 && result < 34.9) {
        cout << "Obese (class II)" << "\n";
    } else {
        cout << "Obese (class III)" << "\n";
    }
}
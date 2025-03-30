#include <iostream>

using namespace std;


const double USD_TO_EUR = 0.91;
const double USD_TO_UZS = 12200;
const double EUR_TO_USD = 1.10;
const double EUR_TO_UZS = 13400;
const double UZS_TO_USD = 0.000082;
const double UZS_TO_EUR = 0.000075;


double convert(double amount, string from, string to) {
    if (from == "USD" && to == "EUR") return amount * USD_TO_EUR;
    if (from == "USD" && to == "UZS") return amount * USD_TO_UZS;
    if (from == "EUR" && to == "USD") return amount * EUR_TO_USD;
    if (from == "EUR" && to == "UZS") return amount * EUR_TO_UZS;
    if (from == "UZS" && to == "USD") return amount * UZS_TO_USD;
    if (from == "UZS" && to == "EUR") return amount * UZS_TO_EUR;

    return -1;
}

int main() {
    double amount;
    string from, to;

    cout << "Konvertatsiya uchun miqdorni kiriting: ";
    cin >> amount;
    cout << "Qaysi valyutadan (USD/EUR/UZS): ";
    cin >> from;
    cout << "Qaysi valyutaga (USD/EUR/UZS): ";
    cin >> to;

    double result = convert(amount, from, to);

    if (result == -1) {
        cout << "Xatolik! Noto‘g‘ri valyuta kiritildi.\n";
    } else {
        cout << amount << " " << from << " = " << result << " " << to << endl;
    }

    return 0;
}

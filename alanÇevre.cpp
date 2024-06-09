#include <iostream>
using namespace std;

const double pi = 3.14;

int main() {
    setlocale(LC_ALL, "Turkish");
    char secim;
    double kenar1, kenar2, yaricap, alan, cevre;

    cout << "Lütfen baş harflerden istediğiniz geometrik şekil için seçim yapınız; kare, dikdörtgen, çember: ";
    cin >> secim;

    switch (secim) {
    case 'ç':
        cout << "Lütfe çemberin yarıçapını giriniz: ";
        cin >> yaricap;
        alan = pi * yaricap * yaricap;
        cevre = 2 * pi * yaricap;
        break;
    case 'k':
        cout << "Lütfen karenin kenar uzunluğunu giriniz: ";
        cin >> kenar1;
        alan = kenar1 * kenar1;
        cevre = 4 * kenar1;
        break;
    case 'd':
        cout << "Lütfen dikdörtgenin uzun ve kısa kenarlarını giriniz: ";
        cin >> kenar1 >> kenar2;
        alan = kenar1 * kenar2;
        cevre = 2 * (kenar1 + kenar2);
        break;
    default:
        cout << "Hatalı seçim yaptınız!" << endl;
        return 1;
    }

    cout << "Alan = " << alan << endl;
    cout << "Çevre = " << cevre << endl;

    return 0;
}
#include <bits/stdcc++.h>

using namespace std;

int main()
{
    string sexo;
    int cerveja, refri, espeto;
    double consumo, couver, ingresso, total;

    //parte 1

    cout << "Sexo: ";
    cin >> sexo;
    cout << "Quantidade de cervejas:";
    cin >> cerveja;
    cout << "Quantidade de refrigerantes: ";
    cin >> refri;
    cout << "Quantidade de espetinhos: ";
    cin >> espeto;

    //parte 2

    if (sexo == "F") {
        ingresso = 8.0;
    }
    else {
        ingresso 10.0;
    }

    consumo = cervejas * 5.0 + refri * 3.0 + espetos * 7.0;

    if (consumo > 30.0){
        couver = 0.0;
    }
    else {
        couver = 4.0;
    }

    total = ingresso + consumo + couver;

    //parte 3

    cout << fixed << setprecision (2);
    cout << endl << "Relatorio:" << endl;
    cout << "Consumo = R$ " << consumo << endl;
    if (couver == 0.0) {
        cout << "Isento de Couver" << endl;
    }
    else {
        cout << "Couver = R$ " << couver << endl;
    }
    cout "Ingresso = R$ " << ingresso << endl;
    cout << endl << "Valor a pagar = R$ " << total << endl;

    return 0;
}

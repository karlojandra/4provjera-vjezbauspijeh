#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int brKlijenata = 0;
    unsigned long long int *brRacuna = new unsigned long long int[1000];
    string *prezimeIme = new string[1000];
    double *saldo = new double[1000];
    int izbor;
    while(1)
    {
        system("cls");
        cout << "1. Unos novog racuna" << endl;
        cout << "2. Ispis svih podataka" << endl;
        cout << "3. Pretraga prema prezimenu i imenu" << endl;
        cout << "4. Brisanje racuna" << endl;
        cout << "5. Izmjena podataka prema broju racuna" << endl;
        cout << "6. Ispis sortirano prema prezimenu i imenu" << endl;
        cout << "7. Izlaz iz programa" << endl;
        cout << "Unesite broj opcije: ";
        cin >> izbor;
        cout << endl;
        if(izbor == 1)
        {
            unsigned long long unos;
            while(1)
            {
                try
                {
                    cout << "Unesite broj racuna: ";
                    cin >> unos;
                    if(unos < 1000000000 || unos > 9999999999)
                        throw "Broj racuna mora imati 10 znamenki";
                    break;
                }
                catch(const char* msg)
                {
                    cout << msg << endl;
                }
            }
            brRacuna[brKlijenata] = unos;
            cout << "Unesite prezime i ime: " << endl;
            cin.ignore();
            getline(cin, prezimeIme[brKlijenata]);
            cout << "Unesite saldo: ";
            cin >> saldo[brKlijenata];
            brKlijenata++;
        }
    }
}

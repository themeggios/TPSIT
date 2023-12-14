#include <iostream>
#include <string.h>
using namespace std;


class Game {

private:
    char* parola;
    string nome;
    int vite = 10;
    int len;
    string parolaCifrata;

public:

    //costruttore
    Game();
    Game(const char *s = nullptr, string Nome = "Nessuno"){
        parola = new char[strlen(s) + 1];
        strcpy(parola, s);
        len = strlen(parola);
        nome = Nome;
        cout << "Benvenuto " << nome << endl;
    }

    string cifraParola()
    {
        for (int i=0; i<len; ++i)
        {
            parolaCifrata += "_";
        }

        return parolaCifrata;
    }

    string controlloCarattere(char* c = "r")
    {
        for (int i=0; i<len; ++i)
        {
            if(parola[i] == *c)
            {
                parolaCifrata[i] == *c;
            }
        }
        return parolaCifrata;
    }
};


int main() {
    Game gioco("Riccardo", "Meggio");
    cout << gioco.cifraParola() << endl;
}

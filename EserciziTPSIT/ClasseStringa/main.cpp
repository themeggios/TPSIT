#include<string.h>
#include<iostream>

using namespace std;

class stringa{

private:
    char* str;

public:
    //costruttore
    stringa();
    stringa(const char *s = nullptr){
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // metodi
    void stampa() // permette di mostrare a video l'oggetto
    {
        cout << str << endl;
    }


    void reverse()   // inverte al stringa ex ciao -> oaic
    {
        int len = strlen(str);
        for(int i=0, j=len-1; i<j; ++i, --j)
        {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }


    void set() // permette di inserire una stringa nuova nell'oggetto
    {

    }


    int cerca(char *c)  // restituisce la prima posizione del carattere "c" dentro la stringa oppure -1
    {
        int len = strlen(str);
        for (int i=0; i<len; ++i)
        {
            if(str[i] == *c)
            {
                return i;
            }
        }

        return -1;
    }


    int conta(char *c) // restituisce la quanti sono i caratteri "c" dentro la stringa oppure 0
    {
        int len = strlen(str);
        int n = 0;
        for (int i=0; i<len; ++i)
        {
            if(str[i] == *c)
            {
                n++;
            }
        }
        return n;
    }


    void toUpper() // trasforma la stringa tutta in maiuscolo
    {
        int len = strlen(str);
        for (int i=0; i<len; ++i)
        {
            str[i] = toupper(str[i]);
        }
    }


    void toLower() // trasforma la stringa tutta in minuscolo
    {
        int len = strlen(str);
        for (int i=0; i<len; ++i)
        {
            str[i] = tolower(str[i]);
        }
    }


    void toFlip() // inverte maiuscole e minuscole della stringa
    {
        int len = strlen(str);
        for (int i=0; i<len; ++i)
        {
            if(isupper(str[i]))
            {
                str[i] = tolower(str[i]);
            }
            else if(islower(str[i]))
            {
                str[i] = toupper(str[i]);
            }
        }
    }


    bool palindroma() // restituisce TRUE se la stringa è palindroma, FALSE se NON è palindroma (NB: gestire gli spazi)
    {
        int len = 0;

        for(int i=0, j=len-1; i<j; ++i, --j)
        {
            if(str[i] != str[j])
            {
                return false;
            }
        }
        return true;
    }

};

int main(){
    stringa miaStringa("ciao bello");
    miaStringa.stampa();


    //miaStringa.reverse();
    //cout << "Cerca: " << miaStringa.cerca("l") << endl;
    //cout << "Conta: " << miaStringa.conta("l") << endl;
    //miaStringa.toUpper();;
    //miaStringa.toLower();
    //miaStringa.toFlip();
    //cout << miaStringa.palindroma() << endl;


    miaStringa.stampa();

}
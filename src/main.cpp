#include <iostream>

#include "cleDe1.h"
#include "cleDe2.h"

using namespace std ;

int main()
{
    while(true)
    {
    int cle(0) ;

    string com = "comming soon !" ;

    cout << "Bienvenue dans le proggrame de chifrement de mots crypte en cle de cesar" << endl << "en quelle cle voulez vous decrypte le mot ? " << endl ;
    cin >> cle ;

    if(cle == 1)
    {
        string laPhrase ;
        cout << "donner moi le mot a chiffrer en cle de 1" << endl << endl ;
        cin >> laPhrase ;
        cout << "Voila : " << endl << endl  ;
        cleDe1(laPhrase);
        cout << endl << endl ;
    }

    else if(cle == 2)
    {
        string laPhrase ;
        cout << "donner moi le mot a chiffrer en cle de 2" << endl << endl ;
        cin >> laPhrase ;
        cout << "Voila : " << endl << endl  ;
        cleDe2(laPhrase);
        cout << endl << endl ;
    }
    else if(cle == 3)
    {
        cout << com << endl ;
    }
    else if(cle == 3)
    {
        cout << com << endl ;
    }
    else if(cle == 4)
    {
        cout << com << endl ;
    }
    else if(cle == 5)
    {
        cout << com << endl ;
    }

    }



}




#include <iostream>

int cleDe2(std::string maPhrase)
{
    maPhrase = maPhrase + " " ;
    int taille1 = maPhrase.length();

    int taille = taille1 ;
    taille -= 1 ;

    std::string cesar[taille];

    int a = 0 ;

    for(int i = 0; i < taille ; i++ )
    {
        cesar[i] = maPhrase.substr(a , 1) ;

        if(cesar[i] == "a")
        {
            cesar[i] = "c" ;
        }
            else if(cesar[i] == "b")
        {
            cesar[i] = "d" ;
        }
            else if(cesar[i] == "c")
        {
            cesar[i] = "e" ;
        }
            else if(cesar[i] == "d")
        {
            cesar[i] = "f" ;
        }
            else if(cesar[i] == "e")
        {
            cesar[i] = "g" ;
        }
            else if(cesar[i] == "f")
        {
            cesar[i] = "h" ;
        }
            else if(cesar[i] == "g")
        {
            cesar[i] = "i" ;
        }
            else if(cesar[i] == "h")
        {
            cesar[i] = "j" ;
        }
            else if(cesar[i] == "i")
        {
            cesar[i] = "k" ;
        }
            else if(cesar[i] == "j")
        {
            cesar[i] = "l" ;
        }
            else if(cesar[i] == "k")
        {
            cesar[i] = "m" ;
        }
            else if(cesar[i] == "l")
        {
            cesar[i] = "n" ;
        }
            else if(cesar[i] == "m")
        {
            cesar[i] = "o" ;
        }
            else if(cesar[i] == "n")
        {
            cesar[i] = "p" ;
        }
            else if(cesar[i] == "o")
        {
            cesar[i] = "q" ;
        }
            else if(cesar[i] == "p")
        {
            cesar[i] = "r" ;
        }
            else if(cesar[i] == "q")
        {
            cesar[i] = "s" ;
        }
            else if(cesar[i] == "r")
        {
            cesar[i] = "t" ;
        }
            else if(cesar[i] == "s")
        {
            cesar[i] = "u" ;
        }
            else if(cesar[i] == "t")
        {
            cesar[i] = "v" ;
        }
            else if(cesar[i] == "u")
        {
            cesar[i] = "w" ;
        }
            else if(cesar[i] == "v")
        {
            cesar[i] = "x" ;
        }
            else if(cesar[i] == "w")
        {
            cesar[i] = "y" ;
        }
            else if(cesar[i] == "x")
        {
            cesar[i] = "z" ;
        }
            else if(cesar[i] == "y")
        {
            cesar[i] = "a" ;
        }
            else if(cesar[i] == "z")
        {
            cesar[i] = "b" ;
        }
            else if(cesar[i] == " ")
        {
            cesar[i] = " " ;
        }

        if(cesar[i] == "A")
        {
            cesar[i] = "C" ;
        }
            else if(cesar[i] == "B")
        {
            cesar[i] = "D" ;
        }
            else if(cesar[i] == "C")
        {
            cesar[i] = "E" ;
        }
            else if(cesar[i] == "D")
        {
            cesar[i] = "F" ;
        }
            else if(cesar[i] == "E")
        {
            cesar[i] = "G" ;
        }
            else if(cesar[i] == "F")
        {
            cesar[i] = "H" ;
        }
            else if(cesar[i] == "G")
        {
            cesar[i] = "I" ;
        }
            else if(cesar[i] == "H")
        {
            cesar[i] = "J" ;
        }
            else if(cesar[i] == "I")
        {
            cesar[i] = "K" ;
        }
            else if(cesar[i] == "J")
        {
            cesar[i] = "L" ;
        }
            else if(cesar[i] == "K")
        {
            cesar[i] = "M" ;
        }
            else if(cesar[i] == "L")
        {
            cesar[i] = "N" ;
        }
            else if(cesar[i] == "M")
        {
            cesar[i] = "O" ;
        }
            else if(cesar[i] == "N")
        {
            cesar[i] = "P" ;
        }
            else if(cesar[i] == "O")
        {
            cesar[i] = "Q" ;
        }
            else if(cesar[i] == "P")
        {
            cesar[i] = "R" ;
        }
            else if(cesar[i] == "Q")
        {
            cesar[i] = "S" ;
        }
            else if(cesar[i] == "R")
        {
            cesar[i] = "T" ;
        }
            else if(cesar[i] == "S")
        {
            cesar[i] = "U" ;
        }
            else if(cesar[i] == "T")
        {
            cesar[i] = "V" ;
        }
            else if(cesar[i] == "U")
        {
            cesar[i] = "W" ;
        }
            else if(cesar[i] == "V")
        {
            cesar[i] = "X" ;
        }
            else if(cesar[i] == "W")
        {
            cesar[i] = "Y" ;
        }
            else if(cesar[i] == "X")
        {
            cesar[i] = "Z" ;
        }
            else if(cesar[i] == "Y")
        {
            cesar[i] = "A" ;
        }
            else if(cesar[i] == "Z")
        {
            cesar[i] = "B" ;
        }
            else if(cesar[i] == " ")
        {
            cesar[i] = " " ;
        }
        std::cout << cesar[i] ;
        a++ ;
    }

}
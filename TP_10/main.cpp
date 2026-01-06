#include <iostream>
using namespace std;

int main () {

int n ; float x ; double z ;
n = 1;
try {
    switch ( n ) {   // le 'switch(n)' permet de faire de définir plusieurs cas selon la valeur de 'n' et exécute les cas qui correspondent à la valeur de 'n'          
    case 1: throw n ; break ;   // si 'n' vaut 1 
    case 2: x = n ; throw x ; break ;   // si 'n' vaut 2  
    case 3: z = n ; throw z ; break ;   // si 'n' vaut 3
    }   
}

catch ( int n ) {   // Rem.: -le 'throw <variable>' nous fait sortir du bloc d'execution dans lequel il se trouve (qui sera souvent le bloc 'if') et [ nous redirige vers le premier 'catch' qui se rapporte à la variable '<variable>' ] (ie. le premier 'catch' qui à comme argument, dans ses parenthèses, une condition sur '<variable>' )
                        //   -le 'catch(int n)' signifie que le catch s'active seulement si 'n' est bien un 'int' (ie. 'int n' soit la valeur 'True' soit la valeur 'False')

cout << " catch entier n = " << n << " \n " ;
}

catch ( float x ) {
cout << " catch float x = " << x << " \n " ;
exit ( -1) ;
}

cout << " fin programme \n " ;


    return 0;
}
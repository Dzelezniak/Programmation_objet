#include <iostream> // importe la bibliothèque 'iostream' qui permet d'utiliser les fonctions pour input/output (ex: 'cin' et 'cout', et donc de pouvoir print des choses dans la console)
using namespace std;


template<class T, class U> void fct(T a, U b) {
cout << "je suis la fonction 1" << endl;
}
template<class T, class U> void fct(T * a, U b) {
cout << "je suis la fonction 2" << endl;
}
template<class T> void fct(T * a, T * b, T * c) {
cout << "je suis la fonction 3" << endl;
}
void fct(int a, float b) {
cout << "Je suis la fonction 4" << endl;
}

int main () {
    int n=0, p=0, q=0;
    float x=0.0, y=0.0;
    double z=0.0;
    cout << "fct (n, p) ;";
    fct(n, p);
    cout << "fct (x, y ) ;";
    fct(x, y);
    cout << "fct (n, x) ;";
    fct(n, x);
    cout << "fct (n, z) ;";
    fct(n, z);
    cout << "fct (&n, p) ;";
    fct(&n, p);
    cout << "fct (&n, x) ;";
    fct(&n, x);
    cout << "fct (&n, &p, &q);";
    fct(&n, &p, &q);
    
   
    return 0;
};
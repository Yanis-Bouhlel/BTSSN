//
// Created by Yanis on 15/10/2022.
//
#include <iostream>
void incrementer_par_valeur(int x) {
     x++;
}
void incrementer_par_pointeur(int * px) {
    (*px)++;
}
void incrementer_par_reference(int & x) {
    x++;
}
int main() {
    int x = 7;
    std::cout << "x = " << x << std::endl;
    incrementer_par_valeur(x);
    std::cout << "incrementer_par_valeur\nx = " << x << std::endl;
    incrementer_par_pointeur(&x);
    std::cout << "incrementer_par_pointeur\nx = " << x << std::endl;
    incrementer_par_reference(x);
    std::cout << "incrementer_par_reference\nx = " << x << std::endl;
    return 0;
}
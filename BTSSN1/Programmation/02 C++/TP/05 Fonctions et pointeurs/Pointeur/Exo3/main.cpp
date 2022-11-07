#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{ /*Zone déclarative*/
    char chips[25] = {"chips"};
    int nbArticle= 0;
    char Course[10][25];
    void listeCourse(char(*ptr_Course)[25], char *ptr_chips);
    /*Zone op*/
    cout << "Veuillez taper votre le nombre de'article liste de course.  \n";
    cin >> nbArticle;
    for (int i = 0; i < nbArticle; i++)
    {
        cout << "Veuillez taper l'article numero" << i + 1 << "\n";
        cin >> Course[i];
    }

    listeCourse(Course, chips);
}

void listeCourse(char (*ptr_Course)[25], char *ptr_chips)
{
    int y;
    bool VerifChoco = false;
    for (y = 0; y < 10; y++)
    {
        if (strcmp(ptr_Course[y], ptr_chips) == 0)
        {
            cout << "Il y a bien des chips dans la liste. \n";
            VerifChoco = true;
            break;
        }
        else
        {
            VerifChoco = false;
        }
    }
    if (VerifChoco == false)
    {
        cout << "Il n'y a pas de chips dans la liste. \n";
    }
}
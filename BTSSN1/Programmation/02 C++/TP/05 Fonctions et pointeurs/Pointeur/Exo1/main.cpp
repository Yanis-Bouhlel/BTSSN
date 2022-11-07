#include <iostream>
using namespace std;
double i;
int main()
{
   double moyenne(double *ptr_Notes, double nombreNote);

   int nombreNotes;
   int i;

   cout << "Veuillez ecrire le nombre de notes que vous souhaiter entrer : \n";
   cin >> nombreNotes;
   double *Notes;
   Notes = new double[nombreNotes];
   for (i = 0; i < nombreNotes; i++)
   {
      cout << "Ecrivez la note numero " << i + 1 << endl;
      cin >> Notes[i];
   }

   cout << "La moyenne est :" << moyenne(Notes, nombreNotes) << endl;
   delete Notes ;
}

double moyenne(double *ptr_Notes, double nombreNote)
{

   double moyenne = 0, somme = 0;
   for (int i = 0; i < nombreNote; i++)
   {
      somme += *(ptr_Notes + i);
   }
   moyenne = somme / nombreNote;
   return moyenne;
}
//Exercice Hypothénuse.


//On ajoute les bibliothèques pour ce programme et on ajoute pas CS50.
#include <stdio.h>
#include <math.h>


//On écrit la fonction principale qui ne renvoie rien.
int main(void)
{

//On ajoute les principales variables qui font nous servir (là ce sont des floats).  
    float AB;
    float BC;
    
//Le terminal va afficher ce que le printf correspond.
//Le scanf va nous permettre extraire la valeur de AB.
    printf("Quel est la longueur de AB en cm : ");
    scanf("%f", &AB);
    
    
//Le terminal va afficher ce que le printf correspond.
//Le scanf va nous permettre extraire la valeur de BC.
    printf("Quel est la longueur de BC en cm : ");
    scanf("%f", &BC);

//On va pouvoir afficher la longueur de l'hypothenuse en utilisant sqrt pour calculer les racines carrées de AB et BC pour trouver AC. 
    printf("Voici la longueur de hypothenuse AC : %f en cm", sqrt(AB * AB + BC * BC));


}

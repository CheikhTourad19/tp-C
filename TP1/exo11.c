#include <stdio.h>
int main()
{
    int nbr_etudiants_inscrit, nbr_etudiant_presant;
    float pourcentage;
    printf("Entrer le nombre d'etudiants totale\n");
    scanf("%d", &nbr_etudiants_inscrit);
    printf("Entrer le nombre d'etudiants presents\n");
    scanf("%d", &nbr_etudiant_presant);
    pourcentage = (nbr_etudiant_presant / (float)nbr_etudiants_inscrit) * 100.00;
    printf("%f", pourcentage);
    printf("le pourcentage est : %.1f", pourcentage);
    return 0;
}
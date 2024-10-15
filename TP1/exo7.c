#include <stdio.h>
int main()
{
    float prixHT, prixTTC, prixU;
    int quantite;
    char nom[100] = "Ahmed";
    printf("entrer la quantite achete \n");
    scanf("%d", &quantite);
    printf("entrer le prix hors tax unitaire \n");
    scanf("%f", &prixU);
    prixHT = quantite * prixU;
    prixTTC = prixHT + (prixHT * 0.1);

    printf("---------facture--Ahmed----------------\n");
    printf("PrixUnitaire ------%f\n", prixU);
    printf("Quantité-----------%d\n", quantite);
    printf("prixHorstax--------%f\n", prixHT);
    printf("PrixTTC------------%f\n", prixTTC);
    printf("-------------------merci---------------");

    return 0;
}
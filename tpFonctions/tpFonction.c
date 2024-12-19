#include <stdio.h>
#include <string.h>
int tabAdindex = 0;
struct adherant
{
    int id;
    char nom[50];
    char prenom[50];
    float plafond;
};
struct constat
{
    int type;
    int id;
    int reference;
    float prixRemboursement;
};

struct adherant saisirAd()
{
    struct adherant ad;
    printf("Saisi d' adherant \n");
    printf("Saisir l'id :\n");
    scanf("%d", &ad.id);
    printf("Saisir le nom :\n");
    scanf("%s", &ad.nom);
    printf("Saisir le prenom :\n");
    scanf("%s", &ad.prenom);
    printf("Saisir le plafond :\n");
    scanf("%f", &ad.plafond);
    return ad;
}
struct constat saisirConstat(struct adherant ad, struct adherant tabAderant[])
{
    struct constat cs;
    for (int i = 0; i < tabAdindex; i++)
    {
        if (tabAderant[i].id == ad.id)
        {
            printf("Saisi d' adherant \n");
            printf("Donner le type \n");
            scanf("%d", cs.type);
            printf("Donner la reference \n");
            scanf("%s", cs.reference);
            printf("Donner le prix de remboursement \n");
            scanf("%f", cs.prixRemboursement);
            cs.id = ad.id;
            return cs;
        }
    }
    return NULL;
}
void initialiser(struct adherant ad, struct adherant tabAderant[], int taille)
{
    if (tabAdindex < taille)
    {
        for (int i = 0; i < tabAdindex; i++)
        {
            if (tabAderant[i].id == ad.id)
            {
                printf("erreur Adherant existe deja\n");
                return;
            }
        }
        tabAderant[tabAdindex] = ad;
        tabAdindex++;
        printf("Ajouté avec succes\n");
    }
    else
    {
        printf("Erreur Tableau plein!!!\n");
    }
}
void afficherAdherent(struct adherant tabAderant[])
{
    for (int i = 0; i < tabAdindex; i++)
    {
        printf("----------------------------------------\n");
        printf("Aderant num %d\n", i + 1);
        printf("Id :%d\n", tabAderant[i].id);
        printf("nom :%s\n", tabAderant[i].nom);
        printf("prenom :%s\n", tabAderant[i].prenom);
        printf("plafond:%f\n", tabAderant[i].plafond);
    }
}

int main()
{
    struct adherant tabAderant[100];
    struct adherant ad = saisirAd();
    struct constat cs = saisirConstat(ad, tabAderant);
    struct constat MatriceConstat[100][100][100];
    ajouterAdherent(ad, tabAderant, 100);
    ajouterAdherent(ad, tabAderant, 100);
    afficherAdherent(tabAderant);
}
//
// Created by Sonia Manai on 04/10/2021.
//

#include "mesStructures.h"
#include <stdio.h>

NombreRationnel saisirNombreRationnel(){
    NombreRationnel p;
    printf("Saisissez le numérateur et le dénominateur.\n");
    scanf("%d %d", &p.numérateur &p.dénominateur);
    return p;
}
void afficherNombreRationnel(NombreRationnel p){
    printf("%d, %d", p.numérateur, p.dénominateur)
}


NombreRationnel multiplicationNombreRationnel(NombreRationnel nd1, NombreRationnel nd2){
    NombreRationnel p;
    NombreRationnel nd1 = saisirNombreRationnel(), nd2=saisirNombreRationnel();
    p.numérateur = nd1.numérateur * nd2.numérateur;
    p.dénominateur = nd1.dénominateur * nd2.dénominateur;
    return p;
}

int exercice2(){
    int i=0;
    int entiers[TAILLE_PHYSIQUE]; // ce tableau permettra de stocker au maximum 100 entiers
    int nbInitial = 0; // taille initiale du tableau

    printf("Combien de valeurs voulez vous insérer dans le tableau ?\n"); // On demande à l'utilisateur le nombre d'entiers à insérer dans le tableau
    scanf("%d", &nbInitial);
    if ( nbInitial> TAILLE_PHYSIQUE){
        printf("Désolé vous dépassez la capacité du tableau.", TAILLE_PHYSIQUE);
        return 1; // fin du programme

    }
    for (i=0; i < nbInitial;  i++){ // On remplit les cases
        printf("Veuillez saisir la valeur %d\n", i+1);
        scanf("%d", &entiers[i]);
    }

    for (i= 0; i< nbInitial-1; i++) {
        printf("%d",&entiers[i]);

    }
    printf("%d.", entiers[nbInitial-1]);
    return 0

}
# define NB_LIGNES_MAX 3
# define NB_COLONNES_MAX 4

int exercice3(){
    int i=0, j=0;
    int monTableau[NB_LIGNES_MAX][NB_COLONNES_MAX];
    int ligne[12];
    // Initialisation à 0 de toutes les cases :
    for(i= 0; i<NB_LIGNES_MAX; i++){
        for( j=0; j< NB_COLONNES_MAX; j++){
            printf("Element[%d][%d]: ", i,j);
            scanf("%d",&monTableau[i][j]);
        }}
    printf("Tableau:\n"); // affichage du tableau à 2 dimension
    for(i=0; i<NB_LIGNES_MAX; i++){
        for(j=0;j<NB_COLONNES_MAX; j++){
            printf("%d",monTableau[i][j]);
            printf("\n");
        }}
    for (i=0,i<NB_LIGNES_MAX;i++){ // transfère des éléments ligne par ligne
        for (j=0; j<NB_COLONNES_MAX; j++){
            ligne[i*NB_COLONNES_MAX+j]=monTableau[i][j];
            printf("Tableau résultat: "); // affichage du tableau à 1dimension
        }
        for(i=0;i<NB_LIGNES_MAX*NB_COLONNES_MAX; i++){
            printf("%d", ligne[i]);
            printf("\n");
            return 0;
        }
    }
}
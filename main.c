#include <stdio.h>
#include mesStructures.h



int main() {
    printf("=====\tTPX : XXXXX\t=====\n");
    int choixExercice = 0;

    //On demande son choix à l'utilisateur
    printf("Quel exercice voulez-vous lancer ?\n");
    //Pensez à afficher les choix disponibles ici

    do{
        scanf("%d", &choixExercice);
        switch (choixExercice) {
            case 1 :
                exercice1();
                break;
            case 2 :
                exercice2();
                break;
            case 3 :
                exercice3();
                break;
            case 0 :
                break;
            default : {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                break;
            }
        }
    }while (choixExercice != 0); //Si choix == 0 on arrête !

    printf("Au revoir !\n");

    return 0;
}


#define TAILLE_PHYSIQUE 100
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

}

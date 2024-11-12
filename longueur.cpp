#include <stdio.h>

int longueur(const char *chaine) {
    int longueur = 0; // Initialiser un compteur pour la longueur

    // Parcourir chaque caractère de la chaîne jusqu'au caractère nul '\0'
    while (chaine[longueur] != '\0') {
        longueur++; // Incrémenter le compteur pour chaque caractère trouvé
    }

    // Retourner la longueur totale de la chaîne
    return longueur;
}

int main() {
    const char *texte = "Exemple"; // Définir une chaîne de test
    printf("Longueur de la chaîne : %d\n", longueur(texte)); // Appeler la fonction et afficher le résultat
    return 0;
}
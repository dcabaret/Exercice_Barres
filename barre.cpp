#include "barre.h"
/**
 *  @file barre.cpp
 *  @brief Implémentation de la classe Barre
 *  @version 1.0
 *  @author Damien CABARET
 *  @date 24/09/2020
 *  @details Classe modélisant les barres
 */

/**
 * @brief Barre::Barre
 * @param _reference La réference de la barre
 * @param _longueur La longueur de la barre
 * @param _densite La densité du metal de la barre
 * @param _alliage L'alliage de la barre
 * @details Constructeur de la classe Barre
 *          Creéation de la barre avec les parametres indiqués
 */
Barre::Barre(string _reference, const float _longueur, const float _densite, string _alliage):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    alliage(_alliage)
{

}

/**
 * @brief Barre::~Barre
 * @details Destructeur de la classe Barre
 */
Barre::~Barre()
{

}

/**
 * @brief Barre::afficherCaracteristiques
 * @details Affiche les différentes caracteristiques de la barre
 */
void Barre::afficherCaracteristiques()
{
    cout << "Alliage : " << alliage << endl;
    cout << "Longueur : " << longueur << endl;
    cout << "Densité : " << densite << endl;
    cout << "Référence : " << reference << endl;
}



#include "barrecarre.h"
/**
 *  @file barrecarre.cpp
 *  @brief Implémentation de la classe BarreCarre
 *  @version 1.0
 *  @author Damien CABARET
 *  @date 24/09/2020
 *  @details Classe modélisant les barres carrées
 */

/**
 * @brief BarreCarre::BarreCarre
 * @param _reference La réference de la barre
 * @param _longueur La longueur de la barre
 * @param _densite La densité du metal de la barre
 * @param _alliage L'alliage de la barre
 * @param _cote Taile du coté de la section de la barre
 * @details Constructeur de la classe BarreCarre
 *          Creéation de la barre carré avec les parametres indiqués
 */
BarreCarre::BarreCarre(string _reference, const float _longueur, const float _densite, string _alliage, const float _cote):
    Barre(_reference, _longueur, _densite, _alliage),
    cote(_cote)
{

}
/**
 * @brief BarreCarre::~BarreCarre
 * @details Déstructeur de la classe BarreCarre
 */
BarreCarre::~BarreCarre()
{

}

/**
 * @brief BarreCarre::CalculerSection
 * @return section La section de la barre
 * @details Calcul la section de la barre
 */
float BarreCarre::CalculerSection()
{
    float section;

    section = cote * cote;

    return section;
}

/**
 * @brief BarreCarre::CalculerMasse
 * @return masse La masse de la barre
 * @details Calcul la masse de la barre
 */
float BarreCarre::CalculerMasse()
{
    float masse;
    float section;

    section = CalculerSection();
    masse = (longueur * section * densite)/1000;

    return masse;
}

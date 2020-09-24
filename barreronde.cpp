#include "barreronde.h"
/**
 *  @file barreronde.cpp
 *  @brief Implémentation de la classe BarreRonde
 *  @version 1.0
 *  @author Damien CABARET
 *  @date 24/09/2020
 *  @details Classe modélisant les barres rondes
 */

/**
 * @brief BarreRonde::BarreRonde
 * @param _reference La réference de la barre
 * @param _longueur La longueur de la barre
 * @param _densite La densité du metal de la barre
 * @param _alliage L'alliage de la barre
 * @param _diametre Le diametre de la section de la berre
 * @details Constructeur de la classe BarreRonde
 */
BarreRonde::BarreRonde(string _reference, const float _longueur, const float _densite, string _alliage, const float _diametre):
    Barre(_reference, _longueur, _densite, _alliage),
    diametre(_diametre)
{

}

/**
 * @brief BarreRonde::~BarreRonde
 * @details Déstructeur de la classe BarreRonde
 */
BarreRonde::~BarreRonde()
{

}

/**
 * @brief BarreRonde::CalculerSection
 * @return section La section de la barre
 * @details Calcul la section de la barre
 */
float BarreRonde::CalculerSection()
{
    float section;

    section = 3.14 * (diametre*diametre) / 4;

    return section;
}

/**
 * @brief BarreRonde::CalculerMasse
 * @return masse La masse de la barre
 * @details Calcul la masse de la barre
 */
float BarreRonde::CalculerMasse()
{
    float masse;
    float section;

    section = CalculerSection();
    masse = (longueur * section * densite)/1000;

    return masse;
}

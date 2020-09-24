#include "barrerectangle.h"
/**
 *  @file barrerectangle.cpp
 *  @brief Implémentation de la classe BarreRectangle
 *  @version 1.0
 *  @author Damien CABARET
 *  @date 24/09/2020
 *  @details Classe modélisant les barres rectangles
 */

/**
 * @brief BarreRectangle::BarreRectangle
 * @param _reference La réference de la barre
 * @param _longueur La longueur de la barre
 * @param _densite La densité du metal de la barre
 * @param _alliage L'alliage de la barre
 * @param _longueurCote La taille de la longueur de la section
 * @param _largeurCote La taille de la largeur de la section
 * @details Constructeur de la classe BarreRectangle
 */
BarreRectangle::BarreRectangle(string _reference, const float _longueur, const float _densite, string _alliage, const float _longueurCote, const float _largeurCote):
    Barre(_reference, _longueur, _densite, _alliage),
    longueurCote(_longueurCote),
    largeurCote(_largeurCote)
{

}

/**
 * @brief BarreRectangle::~BarreRectangle
 * @details Déstructeur de la classe BarreRectangle
 */
BarreRectangle::~BarreRectangle()
{

}

/**
 * @brief BarreRectangle::CalculerSection
 * @return section La section de la barre
 * @details Calcul la section de la barre
 */
float BarreRectangle::CalculerSection()
{
    float section;

    section = longueurCote * largeurCote;

    return section;
}

/**
 * @brief BarreRectangle::CalculerMasse
 * @return masse La masse de la barre
 * @details Calcul la masse de la barre
 */
float BarreRectangle::CalculerMasse()
{
    float masse;
    float section;

    section = CalculerSection();
    masse = (longueur * section * densite)/1000;

    return masse;
}


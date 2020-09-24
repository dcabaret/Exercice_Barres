#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"
/**
 *  @file barrerectangle.h
 *  @brief Déclaration de la classe BarreRectangle
 *  @version 1.0
 *  @author Damien CABARET
 *  @date 24/09/2020
 */

class BarreRectangle : public Barre
{
public:
    BarreRectangle(string _reference, const float _longueur, const float _densite, string _alliage, const float _longueurCote, const float _largeurCote);
    ~BarreRectangle();
    float CalculerSection();
    float CalculerMasse();

private:
    float longueurCote;
    float largeurCote;
};

#endif // BARRERECTANGLE_H

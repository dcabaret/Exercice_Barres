#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"
/**
 *  @file barreRonde.h
 *  @brief Déclaration de la classe BarreRonde
 *  @version 1.0
 *  @author Damien CABARET
 *  @date 24/09/2020
 */

class BarreRonde : public Barre
{
public:
    BarreRonde(string _reference, const float _longueur, const float _densite, string _alliage, const float _diametre);
    ~BarreRonde();
    float CalculerSection();
    float CalculerMasse();

private:
    float diametre;
};

#endif // BARRERONDE_H

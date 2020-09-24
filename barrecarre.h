#ifndef BARRECARRE_H
#define BARRECARRE_H
#include "barre.h"
/**
 *  @file barrecarre.h
 *  @brief Déclaration de la classe BarreCarre
 *  @version 1.0
 *  @author Damien CABARET
 *  @date 24/09/2020
 */

class BarreCarre : public Barre
{
public:
    BarreCarre(string _reference, const float _longueur, const float _densite, string _alliage, const float _cote);
    ~BarreCarre();
    float CalculerSection();
    float CalculerMasse();

private:
    float cote;
};

#endif // BARRECARRE_H

#ifndef BARRE_H
#define BARRE_H
#include <iostream>
/**
 *  @file barre.h
 *  @brief Déclaration de la classe Barre
 *  @version 1.0
 *  @author Damien CABARET
 *  @date 24/09/2020
 */

using namespace std;


class Barre
{
public:
    Barre(string _reference, const float _longueur, const float _densite, string _alliage);
    ~Barre();
    void afficherCaracteristiques();
    /** La longueur de la barre */
    float longueur;
    /** La densité de l'alliage de la barre */
    float densite;

private:
    /** La reference de la barre */
    string reference;
    /** L'alliage de la barre */
    string alliage;

};

#endif // BARRE_H

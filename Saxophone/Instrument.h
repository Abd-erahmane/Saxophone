#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <iostream>
#include <string>
using namespace std;

// Classe de base : Instrument
class Instrument {
public:
    virtual void jouer() const = 0; // Méthode virtuelle pure
    virtual ~Instrument() {};      // Destructeur virtuel
};

#endif // INSTRUMENT_H

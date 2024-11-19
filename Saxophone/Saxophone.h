#ifndef SAXOPHONE_H
#define SAXOPHONE_H

#include "Instrument.h"

// Classe Saxophone (hérite de Instrument)
class Saxophone : public Instrument {
public:
    void jouer() const override {
        cout << "🎷 Le saxophone joue un son mélodieux et jazzy !" << endl;
    }
};

#endif // SAXOPHONE_H

#ifndef PIANO_H
#define PIANO_H

#include "Instrument.h"

// Classe Piano (hérite de Instrument)
class Piano : public Instrument {
public:
    void jouer() const override {
        cout << "🎹 Le piano joue une belle mélodie classique !" << endl;
    }
};

#endif // PIANO_H

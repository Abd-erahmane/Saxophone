#include "Saxophone.h"
#include "Piano.h"

int main() {
    Instrument* instrument = nullptr; // Pointeur de base polymorphe
    int choix;

    cout << "Quel instrument souhaitez-vous jouer ? (1: Saxophone, 2: Piano): ";
    cin >> choix;

    // Cr�ation de l'instrument en fonction du choix de l'utilisateur
    if (choix == 1) {
        instrument = new Saxophone();
    }
    else if (choix == 2) {
        instrument = new Piano();
    }
    else {
        cout << "Choix invalide." << endl;
        return 1;
    }

    // Jouer le son de l'instrument s�lectionn�
    instrument->jouer();

    // Lib�rer la m�moire
    delete instrument;

    return 0;
}


#ifndef ARENA_HPP
#define ARENA_HPP

#include <Vector>

class Arena
{
public:
    std::vector<int> map;
    Arena();
};

// 1024 512 256 128 64 32 16 8 4 2 1

// 1 -> Wall 1
// 2 -> Our cell 1
// 4 -> Opponent cell 1
// 8 -> Rocket on cell 1

// idee en vrac
//

// ! pour la projection,
//   -> 1 point pour les cases vides
//   -> 2 points pour les cases adverses
//   -> 1 point de + pour les cases qui contiennent une rocket
//      -> moins on a de bombe, plus on peut accorder de l'importance aux bombes
//   -> un tableau qui stocke la liste des choix a faire
//   -> on peut avoir une serie de bit qui constituent un masque des cases traversees

// ! pour les bombes, elle prenent 7 secondes a exploser
//   -> ce serait interessant de lancer toutes ses bombes a 8-9 secondes de la fin (120s)
//   -> ce serait bien de chronometrer 7 secondes et d'observer combien de case en
//      moyenne un robot traverse pour prevoir ou jeter la bombe

endif

#include <string>
#include <map>
#include "pokemon.h"
#include <QVector>

class Mechanics
{
 public:
  Mechanics();
  ~Mechanics();
  static const enum type {ELECTRIC, FIRE, WATER, FLYING, GRASS, ROCK} ptype;


  QVector <QVector <int> > attackPercentageVector;
  int attack_perc[6][6] = { {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1},{1, 1, 1, 1},{1, 1, 1, 1}};
  void initialize_player(Pokemon* pokemon);
  void applyDamage(Pokemon* pokemon1, Pokemon* pokemon2, Attack* attack);
  void readJson();
};
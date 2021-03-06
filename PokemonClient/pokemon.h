#ifndef POKEMON
#define POKEMON

#include <string>
#include <QVector>

struct Ability
{
  std::string name;
  std::string effect;
  std::string effect_description;
  bool repeat;
};

struct Attack
{
  QString name;
  std::string type;
  std::string category;
  int power;
  int accuracy;
  int pp;
  std::string effect;
  std::string effect_description;
  int effect_probability;
};


struct Item
{
  std::string name;
  std::string effect;
  std::string effect_description;
  int effect_probability;
};


class Pokemon
{
 public:
  Pokemon(QString name);
  ~Pokemon();
  int getHP();
  int getATK();
  int getDEF();
  int getSPATK();
  int getSPDEF();
  int getSPEED();
  Ability*  getAbility();
  QVector<Attack>  getAttacks();
  std::string getType();
  int currentHP, ATK_bonus, DEF_bonus, SPATK_bonus, SPDEF_bonus, SPEED_bonus; //Can be negative
  bool isFainted;    //default is False unless otherwise specified.
  bool isPoisoned;
  bool isParalized;
  bool isAsleep;
  bool isInfatuated;
  bool isToxic;
  bool isBurned;
  bool isFlinched;
  std::string gender;
  void setAttacks(QVector<Attack>);
  void setCurrentHP(int attack);
 private:
  int MAX_HP, ATK, DEF, SPATK, SPDEF, SPEED;
  int HP_base, ATK_base, DEF_base, SPATK_base, SPDEF_base, SPEED_base;
  int HP_EV, ATK_EV, DEF_EV, SPATK_EV, SPDEF_EV, SPEED_EV;
  int HP_IV, ATK_IV, DEF_IV, SPATK_IV, SPDEF_IV, SPEED_IV;
  QVector<Attack> attacksList;
  int level = 100;
  QString name;
  std::string type1;

};


#endif

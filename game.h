#ifndef GAME_H
#define GAME_H

#define NAME_LENGTH 50
#define TYPE_NAME_LENGTH 20
#define ROUND_SUMMARY_LENGTH 200

typedef struct {
    char atkName[TYPE_NAME_LENGTH];
    char defName[TYPE_NAME_LENGTH];
    double multiplier;
} TypeEffect;

typedef struct {
    char name[TYPE_NAME_LENGTH];
    TypeEffect effects[19];
} Type;

typedef enum {
    PHYSICAL,
    SPECIAL
} MoveCategory;

typedef struct {
    char name[NAME_LENGTH];
    Type type;
    MoveCategory category;
    int power;
    int range;
} Move;

typedef struct {
    int x;
    int y;
} Position;

typedef struct {
    char name[NAME_LENGTH];
    Type types[2];
    int maxHP;
    int currentHP;
    int attack;
    int defense;
    int spAtk;
    int spDef;
    int speed;
    Move moves[4];
} Pokemon;

typedef struct {
    char name[NAME_LENGTH];
    Pokemon Pokemons[6];
    int currentIndex;
    Position position;
} Player;

typedef struct {
    int roundNumber;
    char summary[ROUND_SUMMARY_LENGTH];
} RoundLog;

#endif

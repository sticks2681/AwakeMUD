#ifndef _config_h
#define _config_h

extern int max_exp_gain;
extern int max_pc_corpse_time;
extern int max_npc_corpse_time;
extern int DFLT_PORT;
extern char *DFLT_DIR;
extern int MAX_PLAYERS;
extern int max_filesize;
extern int max_bad_pws;
extern int nameserver_is_slow;
extern const char *OK;
extern const char *TOOBUSY;
extern const char *MENU;
extern const char *QMENU;
extern const char *GREETINGS;
extern const char *WELC_MESSG;
extern const char *START_MESSG;
extern const char *YOU_NEED_OLC_FOR_THAT;
extern const char *DEFAULT_POOFIN_STRING;
extern const char *DEFAULT_POOFOUT_STRING;
extern const char *CANNOT_GO_THAT_WAY;
extern const char *CHARACTER_DELETED_NAME_FOR_SQL;

// What karma / nuyen multipliers do you want your game to have? This effects grind length, higher is faster.
#define KARMA_GAIN_MULTIPLIER 3.0
#define NUYEN_GAIN_MULTIPLIER 3.0

// What maximum amount of karma per action do you want PCs < 100 TKE to have?
#define MAX_NEWCHAR_GAIN  50

// What maximum amount of karma per action do you want PCs < 500 TKE to have?
#define MAX_MIDCHAR_GAIN  100

// What maximum amount of karma per action do you want PCs >= 500 TKE to have?
#define MAX_OLDCHAR_GAIN  MAX(100, GET_TKE(ch) / 4)

// What do you want the maximum skill levels to be? Reference values in awake.h.
#define MAX_SKILL_LEVEL_FOR_MORTS  LEARNED_LEVEL
#define MAX_SKILL_LEVEL_FOR_IMMS   100

// What do you want the newbie karma threshold to be? Above this, you lose the newbie flag.
#define NEWBIE_KARMA_THRESHOLD  25

// How many syspoints should someone spend to restring an item?
#define SYSP_RESTRING_COST  2

// How long should the MUD wait for recovery before killing itself? Note that it
// considers itself to be stuck during copyover too, so if you have a large world,
// you should increase this value.
#define SECONDS_TO_WAIT_FOR_HUNG_MUD_TO_RECOVER_BEFORE_KILLING_IT 30

// What is the maximum cab fare in nuyen?
#define MAX_CAB_FARE  250

// What should the level of new characters' starting language be?
#define STARTING_LANGUAGE_SKILL_LEVEL  10

// How many restring points should newbies get to use in chargen?
#define STARTING_RESTRING_POINTS  5

// What are the default settings of a room if not specified?
#define DEFAULT_DIMENSIONS_X        20
#define DEFAULT_DIMENSIONS_Y        20
#define DEFAULT_DIMENSIONS_Z        2.5
#define DEFAULT_EXIT_BARRIER_RATING 4
#define DEFAULT_EXIT_MATERIAL       5
#define DEFAULT_SECTOR_TYPE         SPIRIT_CITY

// Bearing in mind that morts can't interact with an exit if they can't see it, what is the maximum hidden rating for an exit?
#define MAX_EXIT_HIDDEN_RATING      10

// Thresholds for warning builders about anomalies.
#define ANOMALOUS_HIDDEN_RATING_THRESHOLD 10
#define ANOMALOUS_TOTAL_STATS_THRESHOLD 60
#define ANOMALOUS_SKILL_THRESHOLD 10

// What is the maximum congregation bonus that can be accrued? If you change this, also take a look at score in act.informative.cpp and make sure the spacing matches up.
#define MAX_CONGREGATION_BONUS 500
#define CONGREGATION_MULTIPLIER 1.5
// Note that these values are in hundredths of karma.
#define CONGREGATION_MAX_KARMA_GAIN_PER_ACTION 50
#define CONGREGATION_MIN_KARMA_GAIN_PER_ACTION 25
// The min value must be less than the max value. It ensures people don't feel like they're wasting their karma mult if the accidentally kill a 0.01-karma mob.

// How infrequently do you want your trideo units to display something?
#define TRIDEO_TICK_DELAY 3

#endif

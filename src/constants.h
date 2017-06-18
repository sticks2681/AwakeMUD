#ifndef __CONSTANTS_H
#define __CONSTANTS_H

extern const char *awakemud_version[];
extern const char *dirs[];
extern const char *exitdirs[];
extern const char *lookdirs[];
extern const char *fulldirs[];
extern const char *thedirs[];
extern const char *exit_bits[];
extern const char *genders[];
extern const char *thrdgenders[];
extern const char *position_types[];
extern const char *player_bits[];
extern const char *action_bits[];
extern const char *preference_bits[];
extern const char *affected_bits[];
extern const char *room_bits[];
extern const char *wear_bits[];
extern const char *extra_bits[];

extern const char *connected_types[];
extern const char *wear_where[];
extern const char *item_types[];
extern const char *apply_types[];
extern const char *container_bits[];
extern const char *drinknames[];
extern const char *drinks[];
extern const char *color_liquid[];
extern const char *fullness[];
extern const char *weekdays[];
extern const char *month_name[];
extern int rev_dir[];
extern int drink_aff[][3];
extern const char *material_names[];
extern const char *barrier_names[];
extern const char *patch_names[];
extern int barrier_ratings[];
extern const char *attack_types[];
extern const char *wound_name[];
extern struct skill_data skills[];
extern const char *adept_powers[];
extern const char *attack_types[];
extern const char *wound_arr[];
extern struct spirit_table elements[4];
extern struct spirit_table spirits[];
extern int convert_look[];
extern int convert_dir[];
extern const char *where[];
extern const char *hands[];
extern const char *wielding_hands[];
extern const char *color_liquid[];
extern const char *connected_types[];
extern const char *attack_types[];
extern const char *status_ratings[];
extern const char *short_where[];
extern const char *veh_type[];
extern struct mod_data mod_types[NUM_MODTYPES];
extern const char *mod_name[NUM_MODS];
extern const char *engine_type[6];
extern const char *veh_aff[];
extern const char *veh_flag[];
extern const char *jurid[];
extern const char *host_type[];
extern const char *host_sec[5];
extern const char *intrusion[3];
extern const char *alerts[3];
extern const char *ic_type[];
extern const char *ic_option[];
extern const char *ic_option_long[];
extern struct ammo_data ammo_type[];
extern struct part_data parts[];
extern struct program_data programs[];
extern int attack_multiplier[];
extern const char *positions[];
extern int racial_limits[][2][6];
extern const char *attributes[];
extern const char *short_attributes[];
extern struct drug_data drug_types[];
extern struct spell_types spells[];
extern const char *totem_types[];
extern const char *spell_category[5];
extern const char *durations[3];
extern const char *spirit_name[];
extern const char *foci_type[];
extern const char *light_levels[];
extern const char *room_types[];
extern int damage_array[];
extern const char *cyber_grades[4];
extern const char *eyemods[];
extern const char *bone_lacing[5];
extern const char *hand_razors[3];
extern const char *cyber_types[];
extern const char *bio_types[];
extern const char *metamagic[];
extern const char *pc_race_types[];
extern const char *legality_codes[][2];
extern const char *background_types[];
extern const char *fire_mode[];
extern const char *weapon_type[];
extern const char *combat_modifiers[];
extern const char *pgroup_privileges[];
#endif

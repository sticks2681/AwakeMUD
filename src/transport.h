//  file: transport.h
//  author: Andrew Hynek
//  purpose: contains defines and structs for transportation system
//  Copyright (c) 1998 by Andrew Hynek

#ifndef _transport_h_
#define _transport_h_

#define ELEVATOR_FILE     "etc/elevator"

#define FIRST_CAB         600
#define LAST_CAB          610
#define FIRST_PORTCAB	  650
#define LAST_PORTCAB	  660

#define CMD_NONE          0
#define CMD_DEST          1
#define CMD_YES           2
#define CMD_NO            3

#define ACT_AWAIT_CMD     0
#define ACT_REPLY_DEST    1
#define ACT_AWAIT_YESNO   2
#define ACT_REPLY_NOTOK   3
#define ACT_REPLY_TOOBAD  4
#define ACT_DRIVING       5

#define ELEVATOR_BUTTON_VNUM 41
#define ELEVATOR_PANEL_VNUM  42

struct dest_data
{
  const char *keyword, *str;
  vnum_t vnum;
};

struct floor_data
{
  vnum_t vnum;
  vnum_t shaft_vnum;
  sh_int doors;
};

struct elevator_data
{
  vnum_t room;
  sh_int columns, time_left, dir, num_floors, start_floor;
  struct floor_data *floor;
  long destination;
  elevator_data() :
      floor(NULL), destination(0)
  {}
}
;

#endif

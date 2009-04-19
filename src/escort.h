/*
 * See Licensing and Copyright notice in naev.h
 */



#ifndef ESCORT_H
#  define ESCORT_H


#include "physics.h"
#include "pilot.h"


/* Creation. */
int escort_addList( Pilot *p, char *ship, EscortType_t type, unsigned int id );
int escort_create( unsigned int parent, char *ship,
      Vector2d *pos, Vector2d *vel, EscortType_t type );

/* Keybind commands. */
int escorts_attack( Pilot *parent );
int escorts_hold( Pilot *parent );
int escorts_return( Pilot *parent );
int escorts_clear( Pilot *parent );

/* Updating. */
int escorts_removeDead( Pilot *p );


#endif /* ESCORT_H */

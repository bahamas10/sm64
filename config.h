/*
 * How much damage to take while in water (as an int).  This is NOT an enum,
 * but instead is just an int value of damage to subtract from Mario's health
 * (a signed 16 bit integer).
 *
 * 0 - no damage at all
 * 1 - normal water damage in most levels
 * 2 - more than normal / less than frozen levels
 * 3 - normal water damage in frozen levers
 * ... - even more damage (hard mode?)
 *
 * A negative value will add health while submerged.  Why would you want that?
 * I don't know, but it could be fun.
 *
 */
#define	WATER_DAMAGE	1

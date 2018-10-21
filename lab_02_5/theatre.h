#ifndef __REPERT_H__
#define __REPERT_H__

#define RECORD_N 40
#define MAX_SLEN 50
#define MIN_SLEN 25

typedef enum {CHILD, ADULT} spect_type;
typedef enum {FTALE, CPLAY, MUSIC} child_t;
typedef enum {PLAY, DRAMA, COMEDY} adult_t;

struct spectac
{
	char theatre[MAX_SLEN + 1];
	char title[MAX_SLEN + 1];
	char director[MAX_SLEN + 1];
	int min_tprice;
	int max_tprice;
	spect_type type;
	union
	{	
		struct
		{
			child_t type;
			int age;
			struct
			{
				char composer[MAX_SLEN];
				char country[MIN_SLEN];
				int min_age;
				int duration;
			} music;
		} child;
		adult_t adult;
	} u_spec;
};

struct keytable
{
	int index;
	int val;
};

#endif
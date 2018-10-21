#include "theatre.h"

#ifndef __FILEIO_H__
#define __FILEIO_H__

int read_repert(struct spectac **rep, int *rep_len, FILE *f);
void record_print(FILE *f, struct spectac rep);
void repert_print(FILE *f, struct spectac *rep, int len);
void repert_print_by_table(FILE *f, struct spectac *rep,
	struct keytable *keys, int len);
void write_repert(struct spectac *rep, int rep_len);

#endif
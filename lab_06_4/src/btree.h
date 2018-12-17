#ifndef __BTREE__H__

#define __BTREE__H__

#ifdef ARR_EXPORTS
#define ARR_DLL __declspec(dllexport)
#else
#define ARR_DLL __declspec(dllimport)
#endif

#define ARR_DECL __cdecl

#include <stdio.h>
#include "struct.h"

ARR_DLL tree_t* ARR_DECL create_node(int data);

ARR_DLL void ARR_DECL free_all(tree_t *tree);

ARR_DLL tree_t* ARR_DECL add(tree_t *root, tree_t *node);

ARR_DLL tree_t* ARR_DECL read(FILE *f, int *rc);

ARR_DLL tree_t* ARR_DECL search(tree_t *root, int data);

ARR_DLL tree_t* ARR_DECL tree_remove(tree_t *root, int data);

void print_tree(tree_t *root);

ARR_DLL void ARR_DECL print_node(tree_t *node);

ARR_DLL void ARR_DECL export_to_dot(FILE *f, const char *name, tree_t *tree);

ARR_DLL void ARR_DECL print(tree_t *root, int depth);

#endif
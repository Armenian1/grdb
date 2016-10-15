#ifndef __ENUMERATION_H
#define __ENUMERATION_H

#include "string_pool.h"

struct grdb_enum {
	string_pool_t pool;
	struct grdb_enum *next;
};

typedef struct grdb_enum *enum_t;
typedef enum_t enum_list_t;

void enum_init(enum_t *e);
void enum_print(enum_t e);
void enum_insert(enum_t *e, char *s);

void enum_list_init(enum_list_t *el);
void enum_list_print(enum_list_t el);
void enum_list_insert(enum_list_t *el, enum_t e);

#endif

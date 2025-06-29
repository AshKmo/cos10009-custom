#ifndef STRING_H
#define STRING_H

typedef struct {
	size_t length;
	unsigned char content[];
} String;

String *String_new(size_t length);

bool String_is(String*, char*);

bool String_has_char(String*, char);

String *String_append_char(String*, char);

void String_print(String*);

#endif

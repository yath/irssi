#ifndef __RECODE_H
#define __RECODE_H

char *recode_in (const SERVER_REC *server, const char *str, const char *target);
char *recode_out (const SERVER_REC *server, const char *str, const char *target);
gboolean is_valid_charset(const char *charset);
gboolean is_utf8(void);
gboolean str_is_utf8(const char *, size_t);
void recode_update_charset(void);

void recode_init (void);
void recode_deinit (void);

#endif /* __RECODE_H */

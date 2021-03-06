#ifndef SPM_MIRRORS_H
#define SPM_MIRRORS_H

#define SPM_MIRROR_MAX 0xff
#define SPM_MIRROR_FILENAME "mirrorlist"

char **file_readlines(const char *filename);
char **mirror_list(const char *filename);
void mirror_list_free(char **m);
void mirror_clone(Manifest *info, char *dest);

#endif //SPM_MIRRORS_H

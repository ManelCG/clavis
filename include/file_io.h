#ifndef __FILE_IO_H_
#define __FILE_IO_H_

#if defined(_WIN32) || defined (WIN32)

#endif

_Bool file_io_string_is_folder(const char *s);
_Bool file_io_string_is_file(const char *s);

_Bool file_io_rm_rf(const char *s);
int file_io_get_file_count(const char *s, _Bool recursive);

int file_io_folder_get_file_n(const char *folder, const char *filter);
char **file_io_folder_get_file_list(const char *folder, int nfiles, const char *filter);

const char *file_io_decrypt_password(const char *path);
int file_io_encrypt_password(const char *password, const char *path);

const char *get_password_store_path();

int mkdir_handler(const char *path);
int cp(const char *from, const char *to);

const char *file_io_get_git_config_field(const char *field);
int file_io_init_git_server(const char *username, const char *email, const char *repo_url, _Bool createnew, _Bool refactor_git);


char **file_io_get_full_gpg_keys(int *num);
char **file_io_get_gpg_keys(int *num, _Bool secret);

void file_io_export_gpg_keys(const char *key, const char *path, _Bool private);
void file_io_gpg_trust_key(const char *key);
void file_io_init_password_store(const char *key);

#ifdef __unix__
int file_io_remove_password(const char *path);
#elif defined(_WIN32) || defined (WIN32)

#endif

#endif //_FILE_IO_H_

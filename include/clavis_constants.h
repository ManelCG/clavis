#ifndef __CLAVIS_CONSTANTS_
#define __CLAVIS_CONSTANTS_

//Clavis window modes
#define CLAVIS_NORMAL_MODE 1
#define CLAVIS_POPUP_MODE 2

#define CLAVIS_NORMAL_MODE_NAME "Clavis Normal"
#define CLAVIS_POPUP_MODE_NAME "Clavis Popup"

#define _(String) gettext(String)

//Password info
#define DEFAULT_PASSWORD_SIZE 25
#define DEFAULT_GPG_NAME_LEN 32

//Password generation data
#define CLAVIS_PASSGEN_NUMERALS "0123456789"
#define CLAVIS_PASSGEN_VOWELS_LOWERCASE "aeiou"
#define CLAVIS_PASSGEN_VOWELS_UPPERCASE "AEIOU"
#define CLAVIS_PASSGEN_CONSONANTS_LOWERCASE "bcdfghjklmnpqrstvwxyz"
#define CLAVIS_PASSGEN_CONSONANTS_UPPERCASE "BCDFGHJKLMNPQRSTVWXYZ"
#define CLAVIS_PASSGEN_SYMBOLS "!|\"@#$~%&/{([)]=}?\\<>+*,;.:-_"

#define CLAVIS_BUTTON_NEWPASSWORD_NAME "Button Newpassword"
#define CLAVIS_BUTTON_EXPORT_PUBLIC_KEY_NAME "Export Public Key"
#define CLAVIS_BUTTON_EXPORT_PRIVATE_KEY_NAME "Export Private Key"

#define CLAVIS_BUTTON_INCREASE_STATE "Increase State"
#define CLAVIS_BUTTON_DECREASE_STATE "Decrease State"

#define CLAVIS_SIGNAL_KEYRELEASE_HANDLER_KEYNAV "Keyrelease handler signal ID"

#define CLAVIS_GIT_NONE 0
#define CLAVIS_GIT_AUTH_SSH 1
#define CLAVIS_GIT_AUTH_HTTPS 2
#define CLAVIS_GIT_AUTH_HTTPS_GITHUB 3

#ifdef __unix__
#define CLAVIS_ERROR_PIPE -1
#define CLAVIS_ERROR_FORK -2
#define CLAVIS_ERROR_EXECLP -3
#elif defined(_WIN32) || defined (WIN32)
#define CLAVIS_THEME_UNDEFINED 0
#define CLAVIS_THEME_LIGHT 1
#define CLAVIS_THEME_DARK 2
#endif

#endif //_CLAVIS_CONSTANTS_

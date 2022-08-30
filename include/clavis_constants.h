#ifndef __CLAVIS_CONSTANTS_
#define __CLAVIS_CONSTANTS_

//Clavis window modes
#define CLAVIS_NORMAL_MODE 1
#define CLAVIS_POPUP_MODE 2

#define CLAVIS_NORMAL_MODE_NAME "Clavis Normal"
#define CLAVIS_POPUP_MODE_NAME "Clavis Popup"

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

#define CLAVIS_REGEX_HTTPS "(http(s)?:\\/\\/.)?(www\\.)?[-a-zA-Z0-9@:%._\\+~#=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%_\\+.~#?&//=]*)"
#define CLAVIS_REGEX_SSH "/^\\w+\\@(\\w|\\.)+\\:(\\/\\w+)*$/"
#define CLAVIS_REGEX_GIT "/(?:git|ssh|https?|git@[-\\w.]+):(\\/\\/)?(.*?)(\\.git)(\\/?|\\#[-\\d\\w._]+?)$/"

#endif //_CLAVIS_CONSTANTS_

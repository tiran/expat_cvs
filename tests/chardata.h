/*  chardata.h
 *
 *
 */

#ifndef XML_CHARDATA_H
#define XML_CHARDATA_H 1

#ifndef XML_VERSION
#include "expat.h"                      /* need XML_Char */
#endif

#include <stdbool.h>


typedef struct {
    int count;                          /* # of chars, < 0 if not set */
    XML_Char data[1024];
} CharData;


void CharData_Init(CharData *storage);

void CharData_AppendString(CharData *storage, const char *s);

void CharData_AppendXMLChars(CharData *storage, const XML_Char *s, int len);

bool CharData_CheckString(CharData *storage, const char *s);

bool CharData_CheckXMLChars(CharData *storage, const XML_Char *s);


#endif  /* XML_CHARDATA_H */

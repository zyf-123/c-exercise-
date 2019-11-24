#include<stdio.h>
#include <string.h>
///////////////////////////////////////////////////////////////////////
// Delete all characters in pStrDelete from pStrSource
///////////////////////////////////////////////////////////////////////
void DeleteChars(char* pStrSource, const char* pStrDelete)
{
      if(NULL == pStrSource || NULL == pStrDelete)
            return;
 
      // Initialize an array, the index in this array is ASCII value.
      // All entries in the array, whose index is ASCII value of a
      // character in the pStrDelete, will be set as 1.
      // Otherwise, they will be set as 0.
      const unsigned int nTableSize = 256;
      int hashTable[nTableSize];
      memset(hashTable, 0, sizeof(hashTable));
 
      const char* pTemp = pStrDelete;
      while ('\0' != *pTemp)
      {
            hashTable[*pTemp] = 1;
            ++  pTemp;
      }
 
      char* pSlow = pStrSource;
      char* pFast = pStrSource;
      while ('\0' != *pFast)
      {
            // if the character is in pStrDelete, move both pStart and
            // pEnd forward, and copy pEnd to pStart.
            // Otherwise, move only pEnd forward, and the character
            // pointed by pEnd is deleted
            if(1 != hashTable[*pFast])
            {
                  *pSlow = *pFast;
                  ++ pSlow;
            }
 
            ++pFast;
      }
 
      *pSlow = '\0';
}
int main(void){
	char pStrSource[256]="ac bc x";
	char pStrDelete[256]="bc";
	DeleteChars(pStrSource,pStrDelete);
	puts(pStrSource);
}

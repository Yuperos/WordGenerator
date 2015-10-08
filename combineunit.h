#ifndef COMBINEUNIT_H
#define COMBINEUNIT_H

#include <QString>
#include <Qhash>

#include "alphabet.h"

class CombineUnit
{
   QHash<QChar,int> lettersByType;
public:
   CombineUnit();
   excludeSameLetters(QList<Letter> str, int maxLettersCount = 3);
    //friend "<" and ">" for letter type?
};

#endif // COMBINEUNIT_H

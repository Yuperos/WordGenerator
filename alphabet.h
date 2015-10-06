#ifndef ALPHABET_H
#define ALPHABET_H

#include <QString>
#include <QList>
#include <QMap>

class Letter
{
   QChar symbol;
   int numType; //0 vowel, 1 consonant

public:
   Letter(QChar _symbol,int _numType){symbol=_symbol; numType=_numType;}
   bool operator==(const Letter &b) const;

   int getType() const;
   QChar getSymbol() const;
};

class Alphabet
   {
   int typeCount;

   QMultiMap <int,Letter*> LettersByType;
   QList<Letter> alphabet;
public:
   Alphabet();
   void addLetter(Letter _letter);
   };

#endif // ALPHABET_H

#include "alphabet.h"


int Letter::getType() const
   {
   return numType;
   }

QChar Letter::getSymbol() const
   {
   return symbol;
   }

bool Letter::operator==(const Letter &b) const
   {
   return this->symbol==b.symbol;
   }

Alphabet::Alphabet()
   {
   typeCount = 0;
   }

void Alphabet::addLetter(Letter _letter)
   {
   if (this->alphabet.indexOf(_letter) != -1)
      {
      alphabet.append(_letter);
      this->LettersByType.insert(_letter.getType(),&alphabet.last());
      if (typeCount<_letter.getType()+1) typeCount++;
      }
   }


#include "alphabet.h"

Alphabet::Alphabet()
   {
   typesCount = 0;
   }

Alphabet::Alphabet(Alphabet &obj)
   {
   QList<QPair<QChar,int> >::iterator i;

   QList<QPair<QChar,int> > tempAlphabet = obj.getLetters();

   for(i = tempAlphabet.begin(); i != tempAlphabet.end(); i++)
      this->addLetter(*i);
   }

void Alphabet::addLetter(QChar ch, int type)
   {
   QPair<QChar,int> letter(ch,type);
   addLetter(letter);
   }

void Alphabet::addLetter(QPair<QChar, int> letter)
   {
   if (this->letters.indexOf(letter) != -1)
      {
      letters.append(letter);
      this->LettersByType.insert(letter.second,letter.first);
      if (typesCount < letter.second+1) typesCount++;
      }
   }

QList<QPair<QChar, int> > Alphabet::getLetters()
   {
   return letters;
   }


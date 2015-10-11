#ifndef ALPHABET_H
#define ALPHABET_H

#include <QString>
#include <QList>
#include <QMap>
#include <Qhash>

class Alphabet
   {
   int typesCount;

   QMultiMap <int,QChar> LettersByType;
   QList<QPair<QChar,int> > letters;
public:
   Alphabet();
   Alphabet(Alphabet &obj);
   void addLetter(QChar ch, int type);
   void addLetter(QPair<QChar,int> letter);
   QList<QPair<QChar,int> > getLetters();
   };

#endif // ALPHABET_H

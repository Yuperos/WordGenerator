#ifndef COMBINEUNIT_H
#define COMBINEUNIT_H

#include <QString>
#include <Qhash>
#include <QTime>
#include <QtGlobal>

#include "alphabet.h"

class CombineUnit
{
   double distribSum;
   Alphabet alphabet;
   QList<QPair<QChar,double> > distribution;
   QHash<QChar, int > repeatedLetters;
public:
   CombineUnit();

   void setAlphabet(Alphabet alp);
   void calcDistribSum();

//filter Functions
   int excludeSameLetters(QList<QPair<QChar, int> > str, int maxLettersCount = 3);

//==============================================

   template <typename T>
   T distrRandom(QList<QPair<T,double> > & _distribution)
      {
      typedef QPair<T,double> elemType;

      double sum=0;
      int rand = qrand() % ((int)distribSum+1); // need to test
      foreach (elemType a, _distribution) {
         if (sum+=a.second > rand)
            return a.first;
         }
      return 0;
      }

};

#endif // COMBINEUNIT_H

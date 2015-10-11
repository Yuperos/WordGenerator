#include "combineunit.h"

CombineUnit::CombineUnit()
   {
   repeatedLetters.reserve(25);
   qsrand(QTime(0,0,0).msecsTo(QTime::currentTime()));
   }

void CombineUnit::setAlphabet(Alphabet alp)
   {

   }

void CombineUnit::calcDistribSum()
   {
   distribSum=0;
   QList<QPair<QChar,double> >::iterator i;
   for(i = distribution.begin(); i != distribution.end(); i++)
      distribSum += (*i).second;
   }

int CombineUnit::excludeSameLetters(QList<QPair<QChar, int> > str, int maxLettersCount)
   {
   typedef QPair<QChar,int> elemType;
   foreach(elemType a, str){
      if (repeatedLetters.contains(a.first))
         repeatedLetters[a.first] +=1;
      else
         repeatedLetters.insert(a.first,1);
      if (repeatedLetters.value(a.first) > maxLettersCount)
         {
         repeatedLetters.clear();
         return 0;
         }
      }
   repeatedLetters.clear();
   return 1;
   }


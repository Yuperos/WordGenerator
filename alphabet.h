#ifndef ALPHABET_H
#define ALPHABET_H

#include <QString>
#include <QList>
#include <QMap>

class Letter
{
    QChar symbol;
    int type; //0 vowel, 1 consonant

public:
    Letter(QChar _symbol,int _type){symbol=_symbol; type=_type;}
    bool operator==(const Letter &b) const;

    int getType() const;
    QChar getSymbol() const;
};

class Alphabet
{
    QMultiMap <int,Letter*> LettersByType;
    QList<Letter> alphabet;
public:
    Alphabet();
    void addLetter(Letter _letter);
    QList<QString> CombineLetters();
};

#endif // ALPHABET_H

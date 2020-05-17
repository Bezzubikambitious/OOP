#ifndef DRIB_H
#define DRIB_H

#include <exception>
#include <ctime>
#include <fstream>
#include <QString>

class zero_division: public std::exception
{
public:
    zero_division(){};
    virtual const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
    { return "No zero-division"; }
};

void loggingg(const char * info);

class no_letters: public std::exception
{
public:
    no_letters(){};
    virtual const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
    { return "Use only numbers"; }
};

class overflowing: public std::exception
{
public:
    overflowing(){};
    virtual const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
    { return "Overflowing"; }
};

class skipped_fields: public std::exception
{
public:
    skipped_fields(){};
    virtual const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
    { return "Dont skip fields"; }
};

class mixed_fraction: public std::exception
{
public:
    mixed_fraction(){};
    virtual const char* what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_USE_NOEXCEPT
    { return "No zero-division"; }
};


class Drib
{
private:
    int up_1 = 0;
    int down_1 = 0;
    int up_2 = 0;
    int down_2 = 0;
public:
    Drib();

    void initialization(QString a, QString b, QString c, QString d)
    {


        bool ok;
        if(a.isEmpty()||b.isEmpty()||c.isEmpty()||d.isEmpty())
            throw skipped_fields();


        a.toInt(&ok);
        if(!ok)
            throw no_letters();
        b.toInt(&ok);
        if(!ok)
            throw no_letters();
        c.toInt(&ok);
        if(!ok)
            throw no_letters();
        d.toInt(&ok);
        if(!ok)
            throw no_letters();
        up_1 = a.toInt();
        down_1 = b.toInt();
        up_2 = c.toInt();
        down_2 = d.toInt();
        //if((down_1==0 && down_1!=0) || (down_1==0&&down_2!=0))
           // throw zero_division();
        if(up_1>20000 ||up_2>20000||down_1>20000||down_2>20000)
            throw overflowing();
        if((up_1==0 && up_1!=0) || (up_1==0&&up_2!=0))
            throw zero_division();
    }

    int get_up_1()
    {
        return  up_1;
    }
    int get_down_1()
    {
        return down_1;
    }
    int get_up_2()
    {
        return  up_2;
    }
    int get_down_2()
    {
        return down_2;
    }
    void multiplying(Drib *member);
    void dividing(Drib *member);
    void adding(Drib *member);
    void substraction(Drib *member);
};

#endif

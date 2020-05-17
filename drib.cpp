#include "drib.h"
#include <exception>
#include <ctime>
#include <fstream>
#include <string.h>

void loggingg(const char * info)
{
    std::ofstream LOG;
    LOG.open ("C:\\Users\\Petro\\Documents\\laboratorna12\\tyt.txt", std::ios_base::out | std::ios_base::app);
    time_t now = time(0);
    char* dt = ctime(&now);
    int len = strlen(dt);
    dt[len-1] = '\0';
    LOG << "[" << dt << "] " << info << std::endl;
    LOG.close();

}

Drib::Drib()
{

}

void Drib::adding(Drib *member)
{
    member->up_1 = up_1 * down_2;
    member->up_2 = up_2 * down_1;
    int res_1 = down_1 * down_2;
    int res_2 =  member->up_1 + member->up_2;
    while (1)
    {
            if(res_2 % 7 == 0 && res_1 % 7 == 0)
            {
                res_2 = res_2 / 7;
                res_1 = res_1 / 7;
                continue;
            }
            if(res_2 % 5 == 0 && res_1 % 5 == 0)
            {
                res_2 = res_2 / 5;
                res_1 = res_1 / 5;
                continue;
            }
            if(res_2 % 3 == 0 && res_1 % 3 == 0)
            {
                res_2 = res_2 / 3;
                res_1 = res_1 / 3;
                continue;
            }
            if(res_2 % 2 == 0 && res_1 % 2 == 0)
            {
                res_2 = res_2 / 2;
                res_1 = res_1 / 2;
                continue;
            }
            break;
    }
    member->up_1 = res_2;
    member->down_1 = res_1;
}

void Drib::substraction(Drib *member)
{
    member->up_1 = up_1 * down_2;
    member->up_2 = up_2 * down_1;
    int res_1 = down_1 * down_2;
    int res_2 =  member->up_1 - member->up_2;
    while (1)
    {
            if(res_2 % 7 == 0 && res_1 % 7 == 0)
            {
                res_2 = res_2 / 7;
                res_1 = res_1 / 7;
                continue;
            }
            if(res_2 % 5 == 0 && res_1 % 5 == 0)
            {
                res_2 = res_2 / 5;
                res_1 = res_1 / 5;
                continue;
            }
            if(res_2 % 3 == 0 && res_1 % 3 == 0)
            {
                res_2 = res_2 / 3;
                res_1 = res_1 / 3;
                continue;
            }
            if(res_2 % 2 == 0 && res_1 % 2 == 0)
            {
                res_2 = res_2 / 2;
                res_1 = res_1 / 2;
                continue;
            }
            break;
    }
    member->up_1 = res_2;
    member->down_1 = res_1;
}

void Drib::multiplying(Drib *member)
{
    int res_1 = down_1 * down_2;
    int res_2 = up_1 * up_2;
    while (1)
    {
            if(res_2 % 7 == 0 && res_1 % 7 == 0)
            {
                res_2 = res_2 / 7;
                res_1 = res_1 / 7;
                continue;
            }
            if(res_2 % 5 == 0 && res_1 % 5 == 0)
            {
                res_2 = res_2 / 5;
                res_1 = res_1 / 5;
                continue;
            }
            if(res_2 % 3 == 0 && res_1 % 3 == 0)
            {
                res_2 = res_2 / 3;
                res_1 = res_1 / 3;
                continue;
            }
            if(res_2 % 2 == 0 && res_1 % 2 == 0)
            {
                res_2 = res_2 / 2;
                res_1 = res_1 / 2;
                continue;
            }
            break;
    }
    member->up_1 = res_2;
    member->down_1 = res_1;
}

void Drib::dividing(Drib *member)
{

    int res_1 = down_1 * up_2;
    int res_2 = up_1 * down_2;
    while (1)
    {
            if(res_2 % 7 == 0 && res_1 % 7 == 0)
            {
                res_2 = res_2 / 7;
                res_1 = res_1 / 7;
                continue;
            }
            if(res_2 % 5 == 0 && res_1 % 5 == 0)
            {
                res_2 = res_2 / 5;
                res_1 = res_1 / 5;
                continue;
            }
            if(res_2 % 3 == 0 && res_1 % 3 == 0)
            {
                res_2 = res_2 / 3;
                res_1 = res_1 / 3;
                continue;
            }
            if(res_2 % 2 == 0 && res_1 % 2 == 0)
            {
                res_2 = res_2 / 2;
                res_1 = res_1 / 2;
                continue;
            }
            break;
    }
    member->up_1 = res_2;
    member->down_1 = res_1;
}

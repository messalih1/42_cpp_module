#ifndef DIREVED_H
#define DIREVED_H

#include "base.h"

class direved : public base
{
    private:
         int *ptr;
    public:
        direved();
        direved(int set_n);
        ~direved();
};





#endif
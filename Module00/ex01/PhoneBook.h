#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"

 
class PhoneBook{
    private:
        Contact contacts[8];

    public:
        void create_new_contact();
        void display_contacts(int index);
};





#endif
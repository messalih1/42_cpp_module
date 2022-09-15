#ifndef DOG_H
#define DOG_H


class Dog : public Animal
{
    private:
        /* data */
    public:
        string getType()const;
        void makeSound() const;
        Dog();
        ~Dog();
};










#endif
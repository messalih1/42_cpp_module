#ifndef FRAGTRAP_H
#define FRAGTRAP_H




class FragTrap : public ClapTrap
{
    private:
        /* data */
    public:
        FragTrap();
        FragTrap(string name);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};













#endif
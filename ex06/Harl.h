#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>
# include <cstdlib>

class Harl
{
private:
	void (Harl::*_type[4])(void);
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif
#include "Razstava.h";
#include <iostream>

#include "../../../src/Commander.h"

class Razstava : public Commander {
	void Execute() {
		std::cout << "Heh" << std::endl;
		return;
	}
};

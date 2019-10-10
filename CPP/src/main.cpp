#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include "utils.h"

#include "../projects/razstavaNizov/src/razstava.h"

int main() {
	std::set<std::string> possibleProjects { "razstava" };
	std::string requestedProject = "";

	cprint("Izberi projekt...");
	cprint("Na voljo je:");
	cprint(" -Razstava niza (razstava)");
	cprint("");
	cprint("Za izbor napisi ime v oklepaju!");

	std::getline(std::cin, requestedProject);
	std::transform(requestedProject.begin(), requestedProject.end(), requestedProject.begin(), std::tolower);

	if (possibleProjects.find(requestedProject) == possibleProjects.end()) {
		cprint("Zgleda da to ni prava opcija");
		return 0;
	}

	std::cout << "Zaganjam: " << requestedProject << std::endl;
	
	if (requestedProject == "razstava") razstava();

	return 0;
}

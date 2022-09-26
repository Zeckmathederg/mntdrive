#include <iostream>
#include <string>
int main() {
	std::system("lsblk");
	std::string drive;
	std::cout << "Drive to be mounted: ";
	std::getline(std::cin,drive);
	if (drive == "exit") {
		return 0;
	}
	std::string shcmd = "udisksctl mount -b /dev/";
	shcmd += drive;
	std::system(shcmd.c_str());
	return 0;
}

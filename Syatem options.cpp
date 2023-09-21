#include <iostream>
#include <windows.h>
#include <cstdlib>

bool issure() {
	int ans;
	std::cout << "Are you sure?\n1. Yes\n2. No\n";
	std::cin >> ans;
	switch (ans) {
	case 1:
		return true;
		break;
	case 2:
		return false;
		break;
	default:
		std::cout << "Invalid case";
	}
}

int main() {
	int option;
	while (true) {
		std::cout << "Set option: \n1. Sleep mode\n 2. Turn off\n 3. Restart\n \n Option: ";
		std::cin >> option;
		switch (option) {
		case 1:
			if (issure() == true) {
				SetSuspendState(false, true, false);
			}
			break;
		case 2:
			if (issure() == true) {
				system("shutdown /s /t 0");
			}
			break;
		case 3:
			if (issure() == true) {
				system("shutdown /r /t 0");
			}
			break;
		}
	}
}
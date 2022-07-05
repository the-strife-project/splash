#include <cstdio>

extern "C" void _start() {
	std::string title("S  T  R  I  F  E");

	std::printf("\033\x0B");

	size_t start = (80 - title.size()) / 2;
	for(size_t i=0; i<start; ++i)
		std::printf(" ");
	std::printf("%s", title.c_str());

	std::printf("\033\x0A\n");
	std::exit(0);
}

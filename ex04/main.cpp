#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cerr << "invalid number of arguments" << std::endl;
		return (1);
	}
	std::string filename(argv[1]);
	std::ifstream ifs(&filename[0]);
	std::string content((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
	ifs.close();
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	size_t pos;

	pos = 0;
	while (true) {
		pos = content.find(s1, pos);
		if (pos == std::string::npos)
			break;
		content.erase(pos, s1.length());
		content.insert(pos, s2);
	}

	filename.append(".replace");
	std::ofstream ofs(&filename[0]);
	ofs << content << std::endl;
	ofs.close();
	return 0;
}

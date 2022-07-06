#include "CSVFileLoader.h"
#include <fstream>
#include <sstream>

std::vector<std::vector<std::string>> CSVFileLoader::LoadAndSplit(const std::string& file_name) {
	std::vector<std::vector<std::string>> result_data{};
	std::ifstream file{ file_name.c_str()};
	std::string load_line{};
	std::string split_data{};

	for (int num = 0; std::getline(file, load_line); ++num) {
		result_data.push_back({});
		std::istringstream line_data{ load_line };
		while (std::getline(line_data, split_data, ',')) {
			result_data.back().push_back(split_data);
		}
	}

	return result_data;
}
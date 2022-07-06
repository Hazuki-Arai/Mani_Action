#ifndef CSV_FILE_LOADER_H_
#define CSV_FILE_LOADER_H_

#include <vector>
#include <string>

namespace CSVFileLoader {
	/// <summary>
	/// ファイルを読み込み、カンマで区切る
	/// </summary>
	std::vector<std::vector<std::string>> LoadAndSplit(const std::string& file_name);
}

#endif // !CSV_FILE_LOADER_H_

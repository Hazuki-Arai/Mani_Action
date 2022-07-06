#include "BaseLoader.h"
#include "../CSVFileLoader/CSVFileLoader.h"

BaseLoader::BaseLoader(const std::string& file_name) :
	m_load_list_{ CSVFileLoader::LoadAndSplit(file_name) },
	m_current_load_num_{ 0 }{

}

BaseLoader::~BaseLoader() {

}

void BaseLoader::Update() {
	// ファイルのロードが終了しておらず、ファイルのロードに成功したら
	if (!IsEnd() && Load()) {
		// 読み込みファイル数をカウント
		m_current_load_num_++;
	}
}

bool BaseLoader::IsEnd() const {
	return (m_current_load_num_ >= m_load_list_.size());
}
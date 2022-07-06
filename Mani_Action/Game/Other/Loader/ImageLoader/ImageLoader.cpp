#include "ImageLoader.h"
#include <TextureManager.h>

using namespace Mani;

ImageLoader::ImageLoader(const std::string& file_name) :
	BaseLoader{ file_name } {
}

ImageLoader::~ImageLoader() {
}

bool ImageLoader::Load() {
	// 読み込みファイルの情報数が7個の場合
	if (m_load_list_[m_current_load_num_].size() == 7) {
		return TextureManager::LoadDivTexture(std::stoi(m_load_list_[m_current_load_num_][0]),
			m_load_list_[m_current_load_num_][1],
			std::stoi(m_load_list_[m_current_load_num_][2]),
			std::stoi(m_load_list_[m_current_load_num_][3]),
			std::stoi(m_load_list_[m_current_load_num_][4]),
			std::stoi(m_load_list_[m_current_load_num_][5]),
			std::stoi(m_load_list_[m_current_load_num_][6]));
	}
	// それ以外（2個）の場合
	return TextureManager::LoadTexture(std::stoi(m_load_list_[m_current_load_num_][0]), m_load_list_[m_current_load_num_][1]);
}
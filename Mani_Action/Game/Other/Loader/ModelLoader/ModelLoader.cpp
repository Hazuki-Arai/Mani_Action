#include "ModelLoader.h"
#include <ModelManager.h>

using namespace Mani;

ModelLoader::ModelLoader(const std::string& file_name) :
	BaseLoader{ file_name } {
}

ModelLoader::~ModelLoader() {
}

bool ModelLoader::Load() {
	return ModelManager::LoadModel(std::stoi(m_load_list_[m_current_load_num_][0]), m_load_list_[m_current_load_num_][1]);
}
#include "AnimLoader.h"
#include <AnimationManager.h>

using namespace Mani;

AnimLoader::AnimLoader(const std::string& file_name) :
	BaseLoader{file_name} {
}

AnimLoader::~AnimLoader() {
}

bool AnimLoader::Load() {
	return AnimationManager::LoadAnim(std::stoi(m_load_list_[m_current_load_num_][0]), m_load_list_[m_current_load_num_][1]);
}
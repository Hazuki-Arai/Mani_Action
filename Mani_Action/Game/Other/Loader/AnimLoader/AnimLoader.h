#ifndef ANIM_LOADER_H_
#define ANIM_LOADER_H_

#include "../BaseLoader/BaseLoader.h"

class AnimLoader : public BaseLoader {
public:
	AnimLoader(const std::string& file_name);
	~AnimLoader();

protected:
	bool Load() override;
};

#endif // !ANIM_LOADER_H_
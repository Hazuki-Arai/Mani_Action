#ifndef IMAGE_LOADER_H_
#define IMAGE_LOADER_H_

#include "../BaseLoader/BaseLoader.h"

class ImageLoader : public BaseLoader {
public:
	ImageLoader(const std::string& file_name);
	~ImageLoader();

protected:
	bool Load() override;
};

#endif // !IMAGE_LOADER_H_
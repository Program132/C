#ifndef FILES_H
#define FILES_H

#include <string>

using str = std::string;

namespace N
{
	class files
	{
		public:
			str read(str file);
			str write(str file, str text);
	};
}

#endif // !FILES_H
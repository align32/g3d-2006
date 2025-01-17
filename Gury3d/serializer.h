#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <string>

#include "rapidxml/rapidxml.hpp"
#include "rapidxml/rapidxml_utils.hpp"

namespace RBX
{
	class Serializer
	{
	private:
		static bool checkTag();
	public:
		static void load(const std::string& fileName);
	};
}

#endif
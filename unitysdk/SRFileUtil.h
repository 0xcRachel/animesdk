#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SRFILEUTIL_DELETEDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1848AB40)
#define SRFILEUTIL_GETBYTESREADABLE_OFFSET UNITYSDK_OFFSET(0x1848AC20)

inline static constexpr unsigned int SRFileUtil_TypeDefinitionIndex = 27637;

class SRFileUtil : public ::System::Object
{
public:
	static ::System::Void DeleteDirectory(::System::String* path)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SRFILEUTIL_DELETEDIRECTORY_OFFSET))(path);
	}

	static ::System::String* GetBytesReadable(::System::Int64 i)
	{
		return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SRFILEUTIL_GETBYTESREADABLE_OFFSET))(i);
	}
};

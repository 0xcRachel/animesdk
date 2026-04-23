#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define ZXING_READEREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA4040)

namespace ZXing
{
	inline static constexpr unsigned int ReaderException_TypeDefinitionIndex = 6065;

	class ReaderException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_READEREXCEPTION__CTOR_OFFSET))(this);
		}
	};
}

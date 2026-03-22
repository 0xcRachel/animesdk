#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_9F894095DD9D92C8_ItemData;

#define CLASS_1_9F894095DD9D92C8_METHOD_1_13F0FEDB1C58AAEC_OFFSET UNITYSDK_OFFSET(0x10A4C600)
#define CLASS_1_9F894095DD9D92C8_METHOD_1_90BD36A75103561A_OFFSET UNITYSDK_OFFSET(0x10A4BCA0)
#define CLASS_1_9F894095DD9D92C8_METHOD_1_D2F0563CF77B4C21_OFFSET UNITYSDK_OFFSET(0x10A4C550)
#define CLASS_1_9F894095DD9D92C8__CTOR_OFFSET UNITYSDK_OFFSET(0x10A4C680)

inline static constexpr unsigned int Class_1_9F894095DD9D92C8_TypeDefinitionIndex = 38635;

class Class_1_9F894095DD9D92C8 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Vector4 Method_1_90BD36A75103561A(::Class_1_9F894095DD9D92C8_ItemData* a1)
	{
		return ((::UnityEngine::Vector4(*)(::Class_1_9F894095DD9D92C8_ItemData*))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8_METHOD_1_90BD36A75103561A_OFFSET))(a1);
	}

	static ::System::Single Method_1_13F0FEDB1C58AAEC(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8_METHOD_1_13F0FEDB1C58AAEC_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_D2F0563CF77B4C21(::System::Single a1)
	{
		return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8_METHOD_1_D2F0563CF77B4C21_OFFSET))(a1);
	}
};

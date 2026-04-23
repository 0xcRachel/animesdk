#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD9533418F3B6F39_VCameraType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_905;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_59A9DE327C950886_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118B7C40)
#define CLASS_1_59A9DE327C950886_METHOD_1_2DB52EDDBAF7BE77_OFFSET UNITYSDK_OFFSET(0x118B7F10)
#define CLASS_1_59A9DE327C950886__CTOR_OFFSET UNITYSDK_OFFSET(0x118B7BC0)

inline static constexpr unsigned int Class_1_59A9DE327C950886_TypeDefinitionIndex = 64286;

class Class_1_59A9DE327C950886 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_CD9533418F3B6F39_VCameraType, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_905*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59A9DE327C950886__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59A9DE327C950886_DISPOSE_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_905* Method_1_2DB52EDDBAF7BE77(::Class_1_CD9533418F3B6F39_VCameraType a1)
	{
		return ((::Class_0_16E4307DCC419505_905*(*)(::PVOID, ::Class_1_CD9533418F3B6F39_VCameraType))((::PBYTE)hIl2Cpp + CLASS_1_59A9DE327C950886_METHOD_1_2DB52EDDBAF7BE77_OFFSET))(this, a1);
	}
};

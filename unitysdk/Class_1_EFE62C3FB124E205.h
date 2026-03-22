#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client::OpenWorld { template <typename T1, typename T2> class LRUCache_2; }
namespace System { class String; }

#define CLASS_1_EFE62C3FB124E205_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1030A9C0)
#define CLASS_1_EFE62C3FB124E205_METHOD_1_7F03B34224173121_OFFSET UNITYSDK_OFFSET(0x1030A850)
#define CLASS_1_EFE62C3FB124E205_METHOD_1_9961319058EA1D8D_OFFSET UNITYSDK_OFFSET(0x1030A8F0)
#define CLASS_1_EFE62C3FB124E205_METHOD_1_A62684ADEAB91B7B_OFFSET UNITYSDK_OFFSET(0x1030AA40)
#define CLASS_1_EFE62C3FB124E205__CTOR_OFFSET UNITYSDK_OFFSET(0x1030A7C0)

inline static constexpr unsigned int Class_1_EFE62C3FB124E205_TypeDefinitionIndex = 55270;

class Class_1_EFE62C3FB124E205 : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* Field_1_0; // 0x10
	::RPG::Client::OpenWorld::LRUCache_2<::System::String*, ::RPG::Client::CameraBlendCurve*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE62C3FB124E205__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::CameraBlendCurve* Method_1_7F03B34224173121(::System::String* a1)
	{
		return ((::RPG::Client::CameraBlendCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EFE62C3FB124E205_METHOD_1_7F03B34224173121_OFFSET))(a1);
	}

	::RPG::Client::CameraBlendCurve* Method_1_9961319058EA1D8D(::System::String* a1)
	{
		return ((::RPG::Client::CameraBlendCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EFE62C3FB124E205_METHOD_1_9961319058EA1D8D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFE62C3FB124E205_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A62684ADEAB91B7B(::RPG::Client::CameraBlendCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraBlendCurve*))((::PBYTE)hIl2Cpp + CLASS_1_EFE62C3FB124E205_METHOD_1_A62684ADEAB91B7B_OFFSET))(this, a1);
	}
};

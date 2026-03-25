#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_49A6A53841325E0D_METHOD_1_36A43EE474699637_OFFSET UNITYSDK_OFFSET(0xB27C8D0)
#define CLASS_1_49A6A53841325E0D_METHOD_1_C4055CEF8118F224_OFFSET UNITYSDK_OFFSET(0xB27CA90)
#define CLASS_1_49A6A53841325E0D_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0xB27C7A0)
#define CLASS_1_49A6A53841325E0D_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0xB27C920)
#define CLASS_1_49A6A53841325E0D__CTOR_OFFSET UNITYSDK_OFFSET(0xB27C870)

inline static constexpr unsigned int Class_1_49A6A53841325E0D_TypeDefinitionIndex = 50845;

class Class_1_49A6A53841325E0D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D__CTOR_OFFSET))(this);
	}

	static ::Class_1_49A6A53841325E0D* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_49A6A53841325E0D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D_METHOD_1_E4886687508BA48F_OFFSET))();
	}

	::System::Void Method_1_36A43EE474699637()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D_METHOD_1_36A43EE474699637_OFFSET))(this);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_1_C4055CEF8118F224(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D_METHOD_1_C4055CEF8118F224_OFFSET))(this, a1);
	}
};

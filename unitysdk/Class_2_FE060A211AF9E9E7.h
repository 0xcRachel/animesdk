#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"

namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class RogueTournTitanTypeRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_FE060A211AF9E9E7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x101068B0)
#define CLASS_2_FE060A211AF9E9E7_METHOD_2_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x10105D40)
#define CLASS_2_FE060A211AF9E9E7_METHOD_2_B25D5F2052C133FD_OFFSET UNITYSDK_OFFSET(0x10106330)
#define CLASS_2_FE060A211AF9E9E7_METHOD_2_E97FC8C27C810984_OFFSET UNITYSDK_OFFSET(0x10106690)
#define CLASS_2_FE060A211AF9E9E7_METHOD_2_EF60E8DA50F401E9_OFFSET UNITYSDK_OFFSET(0x101062D0)
#define CLASS_2_FE060A211AF9E9E7_METHOD_2_F19F07276F35F118_OFFSET UNITYSDK_OFFSET(0x10105DE0)
#define CLASS_2_FE060A211AF9E9E7__CCTOR_OFFSET UNITYSDK_OFFSET(0x101067C0)
#define CLASS_2_FE060A211AF9E9E7__CTOR_OFFSET UNITYSDK_OFFSET(0x10106770)
#define CLASS_2_FE060A211AF9E9E7__ONBIND_OFFSET UNITYSDK_OFFSET(0x10105C60)
#define CLASS_2_FE060A211AF9E9E7___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10106850)

inline static constexpr unsigned int Class_2_FE060A211AF9E9E7_TypeDefinitionIndex = 66630;

class Class_2_FE060A211AF9E9E7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FE060A211AF9E9E7_TypeDefinitionIndex)->GetStaticField(0xEE70);
	}
	static ::System::Int32* StaticGet_Field_2_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FE060A211AF9E9E7_TypeDefinitionIndex)->GetStaticField(0xEE74);
	}
	static ::System::Int32* StaticGet_Field_2_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_FE060A211AF9E9E7_TypeDefinitionIndex)->GetStaticField(0xEE78);
	}
	::UnityEngine::Animator* Field_2_2; // 0x60
	::UnityEngine::UI::Image* Field_2_0; // 0x68
	::RPG::Client::LocalizedText* Field_2_1; // 0x70
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_5; // 0x78
	::RPG::GameCore::RogueTitanType Field_2_3; // 0x80
	::System::UInt32 Field_2_4; // 0x84
	::System::Boolean Field_2_6; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7_METHOD_2_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_2_F19F07276F35F118(::RPG::GameCore::RogueTitanType a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTitanType, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7_METHOD_2_F19F07276F35F118_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E97FC8C27C810984(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7_METHOD_2_E97FC8C27C810984_OFFSET))(this, a1);
	}

	::System::Void Method_2_B25D5F2052C133FD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7_METHOD_2_B25D5F2052C133FD_OFFSET))(this, a1);
	}

	::RPG::GameCore::RogueTournTitanTypeRow* Method_2_EF60E8DA50F401E9()
	{
		return ((::RPG::GameCore::RogueTournTitanTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7_METHOD_2_EF60E8DA50F401E9_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE060A211AF9E9E7_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};

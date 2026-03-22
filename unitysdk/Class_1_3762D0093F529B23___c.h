#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3762D0093F529B23___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x857A530)
#define CLASS_1_3762D0093F529B23___C__CTOR_OFFSET UNITYSDK_OFFSET(0x857A570)
#define CLASS_1_3762D0093F529B23___C__ORDERBYDAMAGETYPE_B__3_0_OFFSET UNITYSDK_OFFSET(0x857A580)
#define CLASS_1_3762D0093F529B23___C__ORDERBYID_B__4_0_OFFSET UNITYSDK_OFFSET(0x857A590)

inline static constexpr unsigned int Class_1_3762D0093F529B23___c_TypeDefinitionIndex = 49848;

class Class_1_3762D0093F529B23___c : public ::System::Object
{
public:
	static ::Class_1_3762D0093F529B23___c** StaticGet___9()
	{
		return (::Class_1_3762D0093F529B23___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3762D0093F529B23___c_TypeDefinitionIndex)->GetStaticField(0x46870);
	}
	static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3762D0093F529B23___c_TypeDefinitionIndex)->GetStaticField(0x46878);
	}
	static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3762D0093F529B23___c_TypeDefinitionIndex)->GetStaticField(0x46880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3762D0093F529B23___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3762D0093F529B23___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _OrderByDamageType_b__3_0(::RPG::Client::IAvatarInfoProvider* avatar)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_3762D0093F529B23___C__ORDERBYDAMAGETYPE_B__3_0_OFFSET))(this, avatar);
	}

	::System::Int32 _OrderByID_b__4_0(::RPG::Client::IAvatarInfoProvider* avatar)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_3762D0093F529B23___C__ORDERBYID_B__4_0_OFFSET))(this, avatar);
	}
};

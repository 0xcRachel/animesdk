#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_46EA924A13E63904_GET_ISEFFECT_OFFSET UNITYSDK_OFFSET(0xF78D160)
#define CLASS_2_46EA924A13E63904_GET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0xF78D140)
#define CLASS_2_46EA924A13E63904_SET_ISEFFECT_OFFSET UNITYSDK_OFFSET(0xF78D170)
#define CLASS_2_46EA924A13E63904_SET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0xF78D150)
#define CLASS_2_46EA924A13E63904_UPDATE_OFFSET UNITYSDK_OFFSET(0xF78CFF0)
#define CLASS_2_46EA924A13E63904__CTOR_OFFSET UNITYSDK_OFFSET(0xF78CEE0)
#define CLASS_2_46EA924A13E63904___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xF78D180)

inline static constexpr unsigned int Class_2_46EA924A13E63904_TypeDefinitionIndex = 59853;

class Class_2_46EA924A13E63904 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _ItemIds_k__BackingField; // 0x28
	::System::Boolean _IsEffect_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_UPDATE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ItemIds()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_GET_ITEMIDS_OFFSET))(this);
	}

	::System::Void set_ItemIds(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_SET_ITEMIDS_OFFSET))(this, value);
	}

	::System::Boolean get_IsEffect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_GET_ISEFFECT_OFFSET))(this);
	}

	::System::Void set_IsEffect(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_SET_ISEFFECT_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B8E6D5AD8534D123;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_46EA924A13E63904_GET_ISEFFECT_OFFSET UNITYSDK_OFFSET(0x14FA5210)
#define CLASS_2_46EA924A13E63904_GET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0x14FA51F0)
#define CLASS_2_46EA924A13E63904_SET_ISEFFECT_OFFSET UNITYSDK_OFFSET(0x14FA5220)
#define CLASS_2_46EA924A13E63904_SET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0x14FA5200)
#define CLASS_2_46EA924A13E63904_UPDATE_OFFSET UNITYSDK_OFFSET(0x14FA50A0)
#define CLASS_2_46EA924A13E63904__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA4F90)
#define CLASS_2_46EA924A13E63904___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x14FA5230)

inline static constexpr unsigned int Class_2_46EA924A13E63904_TypeDefinitionIndex = 60788;

class Class_2_46EA924A13E63904 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _ItemIds_k__BackingField; // 0x28
	::System::Boolean _IsEffect_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_UPDATE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ItemIds()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_GET_ITEMIDS_OFFSET))(this);
	}

	::System::Void set_ItemIds(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_SET_ITEMIDS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsEffect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_GET_ISEFFECT_OFFSET))(this);
	}

	::System::Void set_IsEffect(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904_SET_ISEFFECT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_B8E6D5AD8534D123* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + CLASS_2_46EA924A13E63904___IFIXBASEPROXY_UPDATE_OFFSET))(this, a1);
	}
};

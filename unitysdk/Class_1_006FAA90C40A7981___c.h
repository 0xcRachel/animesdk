#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_006FAA90C40A7981;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_006FAA90C40A7981___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB275830)
#define CLASS_1_006FAA90C40A7981___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB275860)
#define CLASS_1_006FAA90C40A7981___C__INITIALIZE_B__2_0_OFFSET UNITYSDK_OFFSET(0xB275870)
#define CLASS_1_006FAA90C40A7981___C__INITIALIZE_B__2_1_OFFSET UNITYSDK_OFFSET(0xB2758D0)
#define CLASS_1_006FAA90C40A7981___C___INITTIMESCALEENTITY_B__5_0_OFFSET UNITYSDK_OFFSET(0xB275930)

inline static constexpr unsigned int Class_1_006FAA90C40A7981___c_TypeDefinitionIndex = 62838;

class Class_1_006FAA90C40A7981___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_006FAA90C40A7981*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::Class_1_006FAA90C40A7981*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_006FAA90C40A7981___c_TypeDefinitionIndex)->GetStaticField(0x48FF0);
	}
	static ::Class_1_006FAA90C40A7981___c** StaticGet___9()
	{
		return (::Class_1_006FAA90C40A7981___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_006FAA90C40A7981___c_TypeDefinitionIndex)->GetStaticField(0x48FF8);
	}
	static ::System::Action_2<::Class_1_006FAA90C40A7981*, ::System::Int32>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_1_006FAA90C40A7981*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_006FAA90C40A7981___c_TypeDefinitionIndex)->GetStaticField(0x49000);
	}
	static ::System::Action_1<::Class_1_006FAA90C40A7981*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_1_006FAA90C40A7981*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_006FAA90C40A7981___c_TypeDefinitionIndex)->GetStaticField(0x49008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981___C__CTOR_OFFSET))(this);
	}

	::System::Void _Initialize_b__2_0(::Class_1_006FAA90C40A7981* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_006FAA90C40A7981*))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981___C__INITIALIZE_B__2_0_OFFSET))(this, self);
	}

	::System::Void _Initialize_b__2_1(::Class_1_006FAA90C40A7981* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_006FAA90C40A7981*))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981___C__INITIALIZE_B__2_1_OFFSET))(this, self);
	}

	::System::Void __InitTimeScaleEntity_b__5_0(::Class_1_006FAA90C40A7981* self, ::System::Int32 entityID)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_006FAA90C40A7981*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981___C___INITTIMESCALEENTITY_B__5_0_OFFSET))(this, self, entityID);
	}
};

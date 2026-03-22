#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightActivityResidentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_02E87012D0CC7F42_OFFSET UNITYSDK_OFFSET(0x166C8370)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x166C7E10)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_3A0AA08B0DD9DA26_OFFSET UNITYSDK_OFFSET(0x166C89B0)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_5AD297B90767E73A_OFFSET UNITYSDK_OFFSET(0x166C87A0)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_748B8A2AB3F1AB26_OFFSET UNITYSDK_OFFSET(0x166C8870)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_956D3D5861E5380F_OFFSET UNITYSDK_OFFSET(0x166C8430)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_CA0AAE5C232FAF65_OFFSET UNITYSDK_OFFSET(0x166C8180)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x166C8100)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x166C8660)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x166C86C0)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x166C8940)
#define CLASS_1_C820C7CBEBE7FD05_METHOD_1_F363CAC402EAA154_OFFSET UNITYSDK_OFFSET(0x166C7D00)
#define CLASS_1_C820C7CBEBE7FD05__CCTOR_OFFSET UNITYSDK_OFFSET(0x166C8D10)

inline static constexpr unsigned int Class_1_C820C7CBEBE7FD05_TypeDefinitionIndex = 12212;

class Class_1_C820C7CBEBE7FD05 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C820C7CBEBE7FD05_TypeDefinitionIndex)->GetStaticField(0x166B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C820C7CBEBE7FD05_TypeDefinitionIndex)->GetStaticField(0x166B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C820C7CBEBE7FD05_TypeDefinitionIndex)->GetStaticField(0x166C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C820C7CBEBE7FD05_TypeDefinitionIndex)->GetStaticField(0x5850);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C820C7CBEBE7FD05_TypeDefinitionIndex)->GetStaticField(0x5851);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>* Method_1_F363CAC402EAA154()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_F363CAC402EAA154_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*> Method_1_CA0AAE5C232FAF65()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_CA0AAE5C232FAF65_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>, ::RPG::GameCore::GridFightActivityResidentConfigRow*> Method_1_02E87012D0CC7F42()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>, ::RPG::GameCore::GridFightActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_02E87012D0CC7F42_OFFSET))();
	}

	static ::RPG::GameCore::GridFightActivityResidentConfigRow* Method_1_956D3D5861E5380F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightActivityResidentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_956D3D5861E5380F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_1AD3CAF2B0982C3F_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Void Method_1_5AD297B90767E73A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_5AD297B90767E73A_OFFSET))(a1);
	}

	static ::System::Void Method_1_748B8A2AB3F1AB26(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_748B8A2AB3F1AB26_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E9D938B6A30770AD(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_E9D938B6A30770AD_OFFSET))(a1);
	}

	static ::System::Void Method_1_3A0AA08B0DD9DA26(::RPG::GameCore::GridFightActivityResidentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightActivityResidentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C820C7CBEBE7FD05_METHOD_1_3A0AA08B0DD9DA26_OFFSET))(a1);
	}
};

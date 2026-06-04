#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingProgressRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BEB87FC57CB01C31_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F62590)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_3B24EA383464A2A3_OFFSET UNITYSDK_OFFSET(0x18F625E0)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_6D25FD09A423FEFD_OFFSET UNITYSDK_OFFSET(0x18F61D70)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_7249E90B1D5661A2_OFFSET UNITYSDK_OFFSET(0x18F62080)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F623C0)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F62450)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_CC5C203F2BB9C5A8_OFFSET UNITYSDK_OFFSET(0x18F621F0)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F62020)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F61DF0)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F62380)
#define CLASS_1_BEB87FC57CB01C31_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F624F0)
#define CLASS_1_BEB87FC57CB01C31__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F62950)

inline static constexpr unsigned int Class_1_BEB87FC57CB01C31_TypeDefinitionIndex = 11852;

class Class_1_BEB87FC57CB01C31 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEB87FC57CB01C31_TypeDefinitionIndex)->GetStaticField(0x65280);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEB87FC57CB01C31_TypeDefinitionIndex)->GetStaticField(0x65288);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEB87FC57CB01C31_TypeDefinitionIndex)->GetStaticField(0x65290);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEB87FC57CB01C31_TypeDefinitionIndex)->GetStaticField(0x134E0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BEB87FC57CB01C31_TypeDefinitionIndex)->GetStaticField(0x134E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>* Method_1_6D25FD09A423FEFD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_6D25FD09A423FEFD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*> Method_1_7249E90B1D5661A2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingProgressRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_7249E90B1D5661A2_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingProgressRow* Method_1_CC5C203F2BB9C5A8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_CC5C203F2BB9C5A8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3B24EA383464A2A3(::RPG::GameCore::SwordTrainingProgressRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingProgressRow*))((::PBYTE)hIl2Cpp + CLASS_1_BEB87FC57CB01C31_METHOD_1_3B24EA383464A2A3_OFFSET))(a1);
	}
};

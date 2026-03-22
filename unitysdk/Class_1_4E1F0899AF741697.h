#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36816D4DE394D200;
class Class_1_ACDBC0A3CD89B5C3;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4E1F0899AF741697_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D3E5C0)
#define CLASS_1_4E1F0899AF741697_METHOD_1_091B35AA38A6D1A3_OFFSET UNITYSDK_OFFSET(0x8D3EB20)
#define CLASS_1_4E1F0899AF741697_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x8D3E700)
#define CLASS_1_4E1F0899AF741697_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x8D3EFE0)
#define CLASS_1_4E1F0899AF741697_METHOD_1_66746A96792CE392_OFFSET UNITYSDK_OFFSET(0x8D3EDA0)
#define CLASS_1_4E1F0899AF741697_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8D3E4A0)
#define CLASS_1_4E1F0899AF741697_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x8D3EA40)
#define CLASS_1_4E1F0899AF741697_METHOD_1_A35C268FCCB2B5CB_OFFSET UNITYSDK_OFFSET(0x8D3E820)
#define CLASS_1_4E1F0899AF741697_METHOD_1_CE3C9FF63C908564_OFFSET UNITYSDK_OFFSET(0x8D3E940)
#define CLASS_1_4E1F0899AF741697_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8D3EFF0)
#define CLASS_1_4E1F0899AF741697__CTOR_OFFSET UNITYSDK_OFFSET(0x8D3F000)

inline static constexpr unsigned int Class_1_4E1F0899AF741697_TypeDefinitionIndex = 57382;

class Class_1_4E1F0899AF741697 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ACDBC0A3CD89B5C3*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ACDBC0A3CD89B5C3*>* Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_1; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_DISPOSE_OFFSET))(this);
	}

	::Class_1_ACDBC0A3CD89B5C3* Method_1_A35C268FCCB2B5CB(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_1_ACDBC0A3CD89B5C3*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_METHOD_1_A35C268FCCB2B5CB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_METHOD_1_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_1_CE3C9FF63C908564(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_METHOD_1_CE3C9FF63C908564_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_66746A96792CE392(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_METHOD_1_66746A96792CE392_OFFSET))(this, a1);
	}

	::Class_1_ACDBC0A3CD89B5C3* Method_1_091B35AA38A6D1A3(::Class_1_36816D4DE394D200* a1)
	{
		return ((::Class_1_ACDBC0A3CD89B5C3*(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_METHOD_1_091B35AA38A6D1A3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1F0899AF741697_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};

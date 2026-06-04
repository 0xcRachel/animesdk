#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

class Class_1_87B6445D24FE4E47;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MultiPathAvatarUnlockItemTransfer; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2A63531FBDE405AB_METHOD_1_409CA082A7F37408_OFFSET UNITYSDK_OFFSET(0x1554CD90)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_55F5D021F7B261C0_OFFSET UNITYSDK_OFFSET(0x1554CE50)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1554CB10)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_9F828126282B58C1_OFFSET UNITYSDK_OFFSET(0x1554CB90)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_A846A63E43CA8232_OFFSET UNITYSDK_OFFSET(0x1554CCF0)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1554CE00)
#define CLASS_1_2A63531FBDE405AB_METHOD_1_F860A08AB9A78001_OFFSET UNITYSDK_OFFSET(0x1554CB00)
#define CLASS_1_2A63531FBDE405AB__CTOR_OFFSET UNITYSDK_OFFSET(0x1554CF00)

inline static constexpr unsigned int Class_1_2A63531FBDE405AB_TypeDefinitionIndex = 58630;

class Class_1_2A63531FBDE405AB : public ::System::Object
{
public:
	::RPG::Client::MultiPathAvatarUnlockItemTransfer* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB__CTOR_OFFSET))(this);
	}

	::RPG::Client::MultiPathAvatarUnlockItemTransfer* Method_1_F860A08AB9A78001()
	{
		return ((::RPG::Client::MultiPathAvatarUnlockItemTransfer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_F860A08AB9A78001_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9F828126282B58C1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_9F828126282B58C1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>* Method_1_A846A63E43CA8232()
	{
		return ((::System::Collections::Generic::List_1<::Enum_3_DFCB42601400F441>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_A846A63E43CA8232_OFFSET))(this);
	}

	::System::Boolean Method_1_409CA082A7F37408(::Enum_3_DFCB42601400F441 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_409CA082A7F37408_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_55F5D021F7B261C0(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_87B6445D24FE4E47*>*))((::PBYTE)hIl2Cpp + CLASS_1_2A63531FBDE405AB_METHOD_1_55F5D021F7B261C0_OFFSET))(this, a1, a2);
	}
};

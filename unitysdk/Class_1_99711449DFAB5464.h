#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_5;
class Class_1_F3ECA6195BFBE70F_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_99711449DFAB5464_GET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0x110C8F90)
#define CLASS_1_99711449DFAB5464_GET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0x110C8FB0)
#define CLASS_1_99711449DFAB5464_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x110C8EF0)
#define CLASS_1_99711449DFAB5464_METHOD_1_4DDD3DE2D159DC6E_OFFSET UNITYSDK_OFFSET(0x110C8B90)
#define CLASS_1_99711449DFAB5464_SET_BATTLEREPLAYKEY_OFFSET UNITYSDK_OFFSET(0x110C8FA0)
#define CLASS_1_99711449DFAB5464_SET_REPLAYINFO_OFFSET UNITYSDK_OFFSET(0x110C8FC0)
#define CLASS_1_99711449DFAB5464__CTOR_OFFSET UNITYSDK_OFFSET(0x110C8F80)

inline static constexpr unsigned int Class_1_99711449DFAB5464_TypeDefinitionIndex = 53173;

class Class_1_99711449DFAB5464 : public ::System::Object
{
public:
	::Class_1_21DCD4640D389503_5* _ReplayInfo_k__BackingField; // 0x10
	::System::String* _BattleReplayKey_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>* Method_1_4DDD3DE2D159DC6E(::System::Collections::Generic::IEnumerable_1<::Class_1_F3ECA6195BFBE70F_2*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_99711449DFAB5464*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_F3ECA6195BFBE70F_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_METHOD_1_4DDD3DE2D159DC6E_OFFSET))(a1);
	}

	static ::Class_1_99711449DFAB5464* Method_1_169C9AE8F88E4F64(::Class_1_F3ECA6195BFBE70F_2* a1)
	{
		return ((::Class_1_99711449DFAB5464*(*)(::Class_1_F3ECA6195BFBE70F_2*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}

	::System::String* get_BattleReplayKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_GET_BATTLEREPLAYKEY_OFFSET))(this);
	}

	::System::Void set_BattleReplayKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_SET_BATTLEREPLAYKEY_OFFSET))(this, value);
	}

	::Class_1_21DCD4640D389503_5* get_ReplayInfo()
	{
		return ((::Class_1_21DCD4640D389503_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_GET_REPLAYINFO_OFFSET))(this);
	}

	::System::Void set_ReplayInfo(::Class_1_21DCD4640D389503_5* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_5*))((::PBYTE)hIl2Cpp + CLASS_1_99711449DFAB5464_SET_REPLAYINFO_OFFSET))(this, value);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_271A23EBE7A648BA_METHOD_2_100843C949699661_OFFSET UNITYSDK_OFFSET(0x84621A0)
#define CLASS_2_271A23EBE7A648BA_METHOD_2_1C5581DD2338939E_OFFSET UNITYSDK_OFFSET(0x8462360)
#define CLASS_2_271A23EBE7A648BA_METHOD_2_3FCB09BFD69BF82D_OFFSET UNITYSDK_OFFSET(0x8462650)
#define CLASS_2_271A23EBE7A648BA_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x8462700)
#define CLASS_2_271A23EBE7A648BA_METHOD_2_6877922714A19594_OFFSET UNITYSDK_OFFSET(0x8462870)
#define CLASS_2_271A23EBE7A648BA_METHOD_2_9E7A039A372199A2_OFFSET UNITYSDK_OFFSET(0x8462550)
#define CLASS_2_271A23EBE7A648BA_METHOD_2_F32669C35BAA2C3B_OFFSET UNITYSDK_OFFSET(0x84622E0)
#define CLASS_2_271A23EBE7A648BA__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8462800)
#define CLASS_2_271A23EBE7A648BA__CTOR_OFFSET UNITYSDK_OFFSET(0x8462960)
#define CLASS_2_271A23EBE7A648BA___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8462A90)

inline static constexpr unsigned int Class_2_271A23EBE7A648BA_TypeDefinitionIndex = 50673;

class Class_2_271A23EBE7A648BA : public ::RPG::Client::BaseModule
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_100843C949699661(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA_METHOD_2_100843C949699661_OFFSET))(this, a1);
	}

	::System::String* Method_2_F32669C35BAA2C3B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA_METHOD_2_F32669C35BAA2C3B_OFFSET))(this, a1);
	}

	::System::String* Method_2_1C5581DD2338939E(::RPG::Client::MapPropDef* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA_METHOD_2_1C5581DD2338939E_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E7A039A372199A2(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA_METHOD_2_9E7A039A372199A2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_3FCB09BFD69BF82D(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA_METHOD_2_3FCB09BFD69BF82D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_6877922714A19594(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA_METHOD_2_6877922714A19594_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_271A23EBE7A648BA___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}
};

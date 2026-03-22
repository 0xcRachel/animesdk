#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_349;
class Class_0_16E4307DCC419505_350;
class Class_1_74F7A8BE5C5500BF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91B92E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_218AE60FD7CF858E_OFFSET UNITYSDK_OFFSET(0x91B77E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x91B88E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_2506EF039A3DF659_OFFSET UNITYSDK_OFFSET(0x91B67B0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_2767989B1782DE75_OFFSET UNITYSDK_OFFSET(0x91B9AD0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_1_OFFSET UNITYSDK_OFFSET(0x91B8820)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_OFFSET UNITYSDK_OFFSET(0x91B84F0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_5C269765C73A26CC_1_OFFSET UNITYSDK_OFFSET(0x91B85B0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_5C269765C73A26CC_OFFSET UNITYSDK_OFFSET(0x91B8280)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_7FC6D3A17F19BD79_OFFSET UNITYSDK_OFFSET(0x91B8C80)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_8C68B593FC7099A7_OFFSET UNITYSDK_OFFSET(0x91B9780)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_9EFC68A7BE2E1962_OFFSET UNITYSDK_OFFSET(0x91B8710)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_ABC1B75CF5A56AEB_OFFSET UNITYSDK_OFFSET(0x91B71C0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET UNITYSDK_OFFSET(0x91B7400)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91B8C40)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_E1C787AF75EB04DB_OFFSET UNITYSDK_OFFSET(0x91B9550)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_FD805D0DD73EB169_OFFSET UNITYSDK_OFFSET(0x91B83E0)
#define RPG_CLIENT_FMSYSTEM_METHOD_1_FEF94127416777DF_OFFSET UNITYSDK_OFFSET(0x91B63B0)
#define RPG_CLIENT_FMSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x91B9CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int FMSystem_TypeDefinitionIndex = 48275;

	class FMSystem : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_350*>* _CustomChannelSources; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_349*>* _CustomChannelClients; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_350*>* _ChannelSources; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_350*>* _ActiveChannelSources; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_74F7A8BE5C5500BF*>* _ChannelReceivers; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_5C269765C73A26CC(::System::String* a1, ::Class_0_16E4307DCC419505_350* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_350*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_5C269765C73A26CC_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_FD805D0DD73EB169(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_FD805D0DD73EB169_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_350* Method_1_30BE3523CF9B739E(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_350*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_OFFSET))(this, a1);
		}

		::System::Void Method_1_5C269765C73A26CC_1(::System::String* a1, ::Class_0_16E4307DCC419505_349* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_349*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_5C269765C73A26CC_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_9EFC68A7BE2E1962(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_9EFC68A7BE2E1962_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_349* Method_1_30BE3523CF9B739E_1(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_349*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_30BE3523CF9B739E_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_2439B52C953E2E46()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_2439B52C953E2E46_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_7FC6D3A17F19BD79(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_7FC6D3A17F19BD79_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_ABC1B75CF5A56AEB(::Class_0_16E4307DCC419505_350* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_350*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_ABC1B75CF5A56AEB_OFFSET))(this, a1);
		}

		::System::Void Method_1_218AE60FD7CF858E(::Class_0_16E4307DCC419505_350* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_350*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_218AE60FD7CF858E_OFFSET))(this, a1);
		}

		::System::Void Method_1_BD22CF6620FEF6E4(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_BD22CF6620FEF6E4_OFFSET))(this, a1);
		}

		::System::Void Method_1_E1C787AF75EB04DB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_E1C787AF75EB04DB_OFFSET))(this, a1);
		}

		::System::Void Method_1_FEF94127416777DF(::Class_0_16E4307DCC419505_349* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_349*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_FEF94127416777DF_OFFSET))(this, a1);
		}

		::System::Void Method_1_2506EF039A3DF659(::Class_0_16E4307DCC419505_349* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_349*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_2506EF039A3DF659_OFFSET))(this, a1);
		}

		::System::Void Method_1_8C68B593FC7099A7(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_8C68B593FC7099A7_OFFSET))(this, a1);
		}

		::System::Void Method_1_2767989B1782DE75(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FMSYSTEM_METHOD_1_2767989B1782DE75_OFFSET))(this, a1);
		}
	};
}

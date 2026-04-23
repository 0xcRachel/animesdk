#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0A12E545170318AA.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AdventureTriggerAttack; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_97A40722E5999741_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC29C120)
#define CLASS_3_97A40722E5999741_METHOD_3_0279A43AB75917CE_OFFSET UNITYSDK_OFFSET(0xC29F2C0)
#define CLASS_3_97A40722E5999741_METHOD_3_15E26F1401C09CF2_OFFSET UNITYSDK_OFFSET(0xC2A0810)
#define CLASS_3_97A40722E5999741_METHOD_3_19FA3773AAC2AEF8_OFFSET UNITYSDK_OFFSET(0xC29E390)
#define CLASS_3_97A40722E5999741_METHOD_3_1ABF33EF52D6BBF0_OFFSET UNITYSDK_OFFSET(0xC29F5A0)
#define CLASS_3_97A40722E5999741_METHOD_3_1D9B8F3876251E59_OFFSET UNITYSDK_OFFSET(0xC29E520)
#define CLASS_3_97A40722E5999741_METHOD_3_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xC29C320)
#define CLASS_3_97A40722E5999741_METHOD_3_283FCF4CAB5CF241_OFFSET UNITYSDK_OFFSET(0xC29EB20)
#define CLASS_3_97A40722E5999741_METHOD_3_2F28A8CBB72E81C1_OFFSET UNITYSDK_OFFSET(0xC29DFC0)
#define CLASS_3_97A40722E5999741_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC29DEC0)
#define CLASS_3_97A40722E5999741_METHOD_3_357A6CA4A438AA90_1_OFFSET UNITYSDK_OFFSET(0xC29FB70)
#define CLASS_3_97A40722E5999741_METHOD_3_357A6CA4A438AA90_OFFSET UNITYSDK_OFFSET(0xC29D200)
#define CLASS_3_97A40722E5999741_METHOD_3_536C2E82540C2DBA_OFFSET UNITYSDK_OFFSET(0xC29E7F0)
#define CLASS_3_97A40722E5999741_METHOD_3_57002A58D66C2821_OFFSET UNITYSDK_OFFSET(0xC29D640)
#define CLASS_3_97A40722E5999741_METHOD_3_5A00073F112390E3_OFFSET UNITYSDK_OFFSET(0xC2A1190)
#define CLASS_3_97A40722E5999741_METHOD_3_7636B0C0D1795753_OFFSET UNITYSDK_OFFSET(0xC29FCD0)
#define CLASS_3_97A40722E5999741_METHOD_3_771EBC0CF103AAB2_OFFSET UNITYSDK_OFFSET(0xC29F8A0)
#define CLASS_3_97A40722E5999741_METHOD_3_8BADB2643698E872_OFFSET UNITYSDK_OFFSET(0xC2A0F60)
#define CLASS_3_97A40722E5999741_METHOD_3_9ED37AA3E0A4E852_OFFSET UNITYSDK_OFFSET(0xC2A0960)
#define CLASS_3_97A40722E5999741_METHOD_3_AC4264BBC5A2903C_OFFSET UNITYSDK_OFFSET(0xC29F4A0)
#define CLASS_3_97A40722E5999741_METHOD_3_B20DAD3A94AC1AF2_OFFSET UNITYSDK_OFFSET(0xC2A0C50)
#define CLASS_3_97A40722E5999741_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xC29DC80)
#define CLASS_3_97A40722E5999741_METHOD_3_D10247F660278B44_OFFSET UNITYSDK_OFFSET(0xC2A10E0)
#define CLASS_3_97A40722E5999741_METHOD_3_D98D2C67BEEB1556_OFFSET UNITYSDK_OFFSET(0xC29FC80)
#define CLASS_3_97A40722E5999741_METHOD_3_DBFE8394F80DC52B_OFFSET UNITYSDK_OFFSET(0xC29ED50)
#define CLASS_3_97A40722E5999741_METHOD_3_EA3ED10C18DB0D6D_OFFSET UNITYSDK_OFFSET(0xC29DB30)
#define CLASS_3_97A40722E5999741_METHOD_3_F12126633650E005_OFFSET UNITYSDK_OFFSET(0xC29FE80)
#define CLASS_3_97A40722E5999741_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC29C270)
#define CLASS_3_97A40722E5999741_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC29FBD0)
#define CLASS_3_97A40722E5999741_TICK_OFFSET UNITYSDK_OFFSET(0xC29FC20)
#define CLASS_3_97A40722E5999741__CTOR_OFFSET UNITYSDK_OFFSET(0xC29BE00)
#define CLASS_3_97A40722E5999741___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2A1240)

inline static constexpr unsigned int Class_3_97A40722E5999741_TypeDefinitionIndex = 53415;

class Class_3_97A40722E5999741 : public ::Class_2_0A12E545170318AA
{
public:
	::RPG::GameCore::TaskContext* Field_3_1; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_2; // 0x48
	::Class_3_E21F6DE9B7FA4D05* Field_3_5; // 0x50
	::Class_1_5F51D4049EA87B7B* Field_3_9; // 0x58
	::RPG::GameCore::AdventureTriggerAttack* Field_3_0; // 0x60
	::Class_3_E21F6DE9B7FA4D05* Field_3_7; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_4; // 0x70
	::Class_3_E21F6DE9B7FA4D05* Field_3_8; // 0x78
	::Class_3_E21F6DE9B7FA4D05* Field_3_6; // 0x80
	::RPG::GameCore::GameEntityList* Field_3_3; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureTriggerAttack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureTriggerAttack*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_357A6CA4A438AA90(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_357A6CA4A438AA90_OFFSET))(this, a1);
	}

	::System::Void Method_3_57002A58D66C2821(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_57002A58D66C2821_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EA3ED10C18DB0D6D(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_EA3ED10C18DB0D6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_2F28A8CBB72E81C1(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_2F28A8CBB72E81C1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_19FA3773AAC2AEF8(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_19FA3773AAC2AEF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_536C2E82540C2DBA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_536C2E82540C2DBA_OFFSET))(this, a1);
	}

	::System::Void Method_3_DBFE8394F80DC52B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_DBFE8394F80DC52B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0279A43AB75917CE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_0279A43AB75917CE_OFFSET))(this, a1);
	}

	::System::Void Method_3_AC4264BBC5A2903C(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_AC4264BBC5A2903C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1ABF33EF52D6BBF0(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_1ABF33EF52D6BBF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_283FCF4CAB5CF241(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_283FCF4CAB5CF241_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_1D9B8F3876251E59(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_1D9B8F3876251E59_OFFSET))(this, a1);
	}

	::System::Void Method_3_2157CED3CDDF8996()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_2157CED3CDDF8996_OFFSET))(this);
	}

	::System::Void Method_3_771EBC0CF103AAB2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_771EBC0CF103AAB2_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_TICK_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_D98D2C67BEEB1556(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_D98D2C67BEEB1556_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* Method_3_7636B0C0D1795753(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_7636B0C0D1795753_OFFSET))(a1);
	}

	::System::Void Method_3_F12126633650E005(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_F12126633650E005_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_15E26F1401C09CF2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_15E26F1401C09CF2_OFFSET))(this);
	}

	::System::Void Method_3_357A6CA4A438AA90_1(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_357A6CA4A438AA90_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_9ED37AA3E0A4E852(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_9ED37AA3E0A4E852_OFFSET))(this, a1);
	}

	::System::Void Method_3_B20DAD3A94AC1AF2(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_B20DAD3A94AC1AF2_OFFSET))(this, a1);
	}

	::System::Void Method_3_8BADB2643698E872(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_8BADB2643698E872_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_D10247F660278B44(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_D10247F660278B44_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_5A00073F112390E3(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741_METHOD_3_5A00073F112390E3_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97A40722E5999741___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

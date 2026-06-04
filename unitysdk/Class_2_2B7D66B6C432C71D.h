#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_5D383A48C6769A2A;
class Class_2_ABDB9F9EEB76D625;
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_2B7D66B6C432C71D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16065F80)
#define CLASS_2_2B7D66B6C432C71D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16066100)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_3C029C534AE1FB6B_1_OFFSET UNITYSDK_OFFSET(0x160655D0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_3C029C534AE1FB6B_2_OFFSET UNITYSDK_OFFSET(0x16065710)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0x160653D0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_3D813D05865A080E_OFFSET UNITYSDK_OFFSET(0x16064ED0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x16065CA0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x16064A30)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_81D45978B8E3E7F2_OFFSET UNITYSDK_OFFSET(0x16064FA0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x16065EC0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x16065F20)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x16065E60)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16065510)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_D155D4917B3D2C6A_OFFSET UNITYSDK_OFFSET(0x160658E0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x160643E0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_DDDB3490E38FF95F_OFFSET UNITYSDK_OFFSET(0x160648B0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_E16D198469DB59F4_OFFSET UNITYSDK_OFFSET(0x16065850)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x160650F0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16065C30)
#define CLASS_2_2B7D66B6C432C71D__CTOR_OFFSET UNITYSDK_OFFSET(0x16066260)
#define CLASS_2_2B7D66B6C432C71D__ONBIND_OFFSET UNITYSDK_OFFSET(0x160640F0)
#define CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16066450)
#define CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x160664B0)
#define CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x160663F0)

inline static constexpr unsigned int Class_2_2B7D66B6C432C71D_TypeDefinitionIndex = 67527;

class Class_2_2B7D66B6C432C71D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::List_1<::Class_2_5D383A48C6769A2A*>* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* Field_2_2; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::UnityEngine::UI::Button* Field_2_5; // 0x88
	::UnityEngine::Transform* Field_2_6; // 0x90
	::UnityEngine::Transform* Field_2_7; // 0x98
	::System::Collections::Generic::List_1<::Class_2_ABDB9F9EEB76D625*>* Field_2_8; // 0xA0
	::UnityEngine::UI::Text* Field_2_9; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Int32 Method_2_3D813D05865A080E(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_3D813D05865A080E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightTraitLayerConfig* Method_2_81D45978B8E3E7F2(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_81D45978B8E3E7F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_3C029C534AE1FB6B_OFFSET))(this);
	}

	::System::Void Method_2_3C029C534AE1FB6B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_3C029C534AE1FB6B_1_OFFSET))(this);
	}

	::System::Void Method_2_3C029C534AE1FB6B_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_3C029C534AE1FB6B_2_OFFSET))(this);
	}

	::System::Void Method_2_E16D198469DB59F4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_E16D198469DB59F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D155D4917B3D2C6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_D155D4917B3D2C6A_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_DDDB3490E38FF95F()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_DDDB3490E38FF95F_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

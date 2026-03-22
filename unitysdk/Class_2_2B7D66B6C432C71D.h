#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_5D383A48C6769A2A;
class Class_2_6E86851755BB142B;
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

#define CLASS_2_2B7D66B6C432C71D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8F66710)
#define CLASS_2_2B7D66B6C432C71D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8F66850)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0x8F65EA0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x8F655F0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_3D813D05865A080E_OFFSET UNITYSDK_OFFSET(0x8F65390)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_6B6A6C287518AB71_OFFSET UNITYSDK_OFFSET(0x8F65DE0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x8F65970)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_8F8D080EF5D1D761_OFFSET UNITYSDK_OFFSET(0x8F64C60)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_93190E731E31C79A_OFFSET UNITYSDK_OFFSET(0x8F64840)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x8F663E0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8F66650)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x8F666B0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8F665F0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x8F64DD0)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_BDAC3726B2B73008_OFFSET UNITYSDK_OFFSET(0x8F65460)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x8F66350)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_1_OFFSET UNITYSDK_OFFSET(0x8F65A80)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_2_OFFSET UNITYSDK_OFFSET(0x8F65C30)
#define CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x8F657C0)
#define CLASS_2_2B7D66B6C432C71D__CTOR_OFFSET UNITYSDK_OFFSET(0x8F66970)
#define CLASS_2_2B7D66B6C432C71D__ONBIND_OFFSET UNITYSDK_OFFSET(0x8F64560)
#define CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8F66B30)
#define CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8F66B90)
#define CLASS_2_2B7D66B6C432C71D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8F66AD0)

inline static constexpr unsigned int Class_2_2B7D66B6C432C71D_TypeDefinitionIndex = 57575;

class Class_2_2B7D66B6C432C71D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_2_9; // 0x60
	::UnityEngine::Transform* Field_2_4; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_3; // 0x78
	::UnityEngine::UI::Text* Field_2_1; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightTraitConfigBase*>* Field_2_8; // 0x88
	::UnityEngine::Transform* Field_2_5; // 0x90
	::System::Collections::Generic::List_1<::Class_2_6E86851755BB142B*>* Field_2_7; // 0x98
	::System::Collections::Generic::List_1<::Class_2_5D383A48C6769A2A*>* Field_2_6; // 0xA0
	::UnityEngine::UI::Button* Field_2_0; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_93190E731E31C79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_93190E731E31C79A_OFFSET))(this);
	}

	::System::Int32 Method_2_3D813D05865A080E(::RPG::GameCore::BattleGridFightTeamTraitData* a1, ::RPG::GameCore::BattleGridFightTeamTraitData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_3D813D05865A080E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::GridFightTraitLayerConfig* Method_2_BDAC3726B2B73008(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_BDAC3726B2B73008_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_1_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_F7300E87EC49A206_2_OFFSET))(this);
	}

	::System::Void Method_2_6B6A6C287518AB71(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_6B6A6C287518AB71_OFFSET))(this, a1);
	}

	::System::Void Method_2_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::RPG::GameCore::GridFightManager* Method_2_8F8D080EF5D1D761()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_8F8D080EF5D1D761_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B7D66B6C432C71D_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
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

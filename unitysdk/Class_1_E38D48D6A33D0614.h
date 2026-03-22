#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/FightStatus.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632_2;
class Class_1_8AC8221DC4178532_1;
class Class_1_E7C852659CE70433;
class Class_1_FA4F4A67B1C04320_272;
class Class_1_FA4F4A67B1C04320_273;
class Class_1_FA4F4A67B1C04320_274;
class Class_1_FA4F4A67B1C04320_275;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E38D48D6A33D0614_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16005440)
#define CLASS_1_E38D48D6A33D0614_GET_CURSECTIONID_OFFSET UNITYSDK_OFFSET(0x1600B9A0)
#define CLASS_1_E38D48D6A33D0614_GET_MAXSECTIONID_OFFSET UNITYSDK_OFFSET(0x1600B9C0)
#define CLASS_1_E38D48D6A33D0614_GET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0x1600B9E0)
#define CLASS_1_E38D48D6A33D0614_GET__FIGHTSTATUS_OFFSET UNITYSDK_OFFSET(0x1600BA00)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_04D24A03108B3E43_OFFSET UNITYSDK_OFFSET(0x16009660)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_07EF0A77C5FD38D1_OFFSET UNITYSDK_OFFSET(0x16008A60)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x160055E0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_0A2FDFD9907A596E_OFFSET UNITYSDK_OFFSET(0x1600AF50)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_0EE6DC0910F10862_OFFSET UNITYSDK_OFFSET(0x1600B500)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x16006A70)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x1600B930)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15FECF90)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_182007691F3936A9_OFFSET UNITYSDK_OFFSET(0x16005490)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_1C284B13E04C9453_OFFSET UNITYSDK_OFFSET(0x16005D20)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_1DD38BF5DB9EED2B_OFFSET UNITYSDK_OFFSET(0x160067C0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_299BC5492663D815_OFFSET UNITYSDK_OFFSET(0x16007260)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_31014A0D551B9D91_OFFSET UNITYSDK_OFFSET(0x16007480)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_3C696CB7BFAE965B_OFFSET UNITYSDK_OFFSET(0x16008970)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_469CB0742F2FBD6D_OFFSET UNITYSDK_OFFSET(0x16008760)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_57EB07CF37346FB2_OFFSET UNITYSDK_OFFSET(0x16007860)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_596C56D32701C9A4_OFFSET UNITYSDK_OFFSET(0x1600B7F0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_5F2602FD3BB3FF8C_OFFSET UNITYSDK_OFFSET(0x16009770)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_5F5970703C92B32A_OFFSET UNITYSDK_OFFSET(0x16008DA0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x16009C40)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_7542BD3335E796EB_OFFSET UNITYSDK_OFFSET(0x1600B5F0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_8F7AD00CE70D0A7B_OFFSET UNITYSDK_OFFSET(0x16009B70)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_970F81212EB01D53_OFFSET UNITYSDK_OFFSET(0x16007610)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_A205BE2CACAE7D32_OFFSET UNITYSDK_OFFSET(0x15FF7370)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_A37EF40E0E62AE02_OFFSET UNITYSDK_OFFSET(0x16008460)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_A8366ADB00ACEE19_OFFSET UNITYSDK_OFFSET(0x15FF7630)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x15FEFAD0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16002D40)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x15FECBE0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0x16006760)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_DAFA5FF3552EBD95_OFFSET UNITYSDK_OFFSET(0x16006A00)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x160091F0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x16002800)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1600BA20)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x15FFA560)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1600B990)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F6A3F37ABA17EC81_OFFSET UNITYSDK_OFFSET(0x15FF75B0)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_F8905EC1BD9330FD_OFFSET UNITYSDK_OFFSET(0x1600B300)
#define CLASS_1_E38D48D6A33D0614_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x16007B50)
#define CLASS_1_E38D48D6A33D0614_SET_CURSECTIONID_OFFSET UNITYSDK_OFFSET(0x1600B9B0)
#define CLASS_1_E38D48D6A33D0614_SET_MAXSECTIONID_OFFSET UNITYSDK_OFFSET(0x1600B9D0)
#define CLASS_1_E38D48D6A33D0614_SET_SECTIONDATAS_OFFSET UNITYSDK_OFFSET(0x1600B9F0)
#define CLASS_1_E38D48D6A33D0614_SET__FIGHTSTATUS_OFFSET UNITYSDK_OFFSET(0x1600BA10)
#define CLASS_1_E38D48D6A33D0614__CTOR_OFFSET UNITYSDK_OFFSET(0x160053C0)
#define CLASS_1_E38D48D6A33D0614__ISALLONLINEPLAYERVOTECONFIRMED_B__18_0_OFFSET UNITYSDK_OFFSET(0x1600BB60)
#define CLASS_1_E38D48D6A33D0614__ISALLPLAYERBETFINISHED_B__9_0_OFFSET UNITYSDK_OFFSET(0x1600BA30)
#define CLASS_1_E38D48D6A33D0614___TRYADDSPECIALEFFECTFORVOTE_B__15_1_OFFSET UNITYSDK_OFFSET(0x1600BAC0)

inline static constexpr unsigned int Class_1_E38D48D6A33D0614_TypeDefinitionIndex = 28097;

class Class_1_E38D48D6A33D0614 : public ::System::Object
{
public:
	::RPG::Common::StateMachine_1<::Class_1_E38D48D6A33D0614*>* Field_1_3; // 0x10
	::Class_2_F3C45F1FC7349B6E* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::Class_1_E7C852659CE70433*>* _SectionDatas_k__BackingField; // 0x20
	::System::UInt32 _CurSectionId_k__BackingField; // 0x28
	::System::UInt32 _MaxSectionId_k__BackingField; // 0x2C
	::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus __FightStatus_k__BackingField; // 0x30

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType Method_1_A205BE2CACAE7D32()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_A205BE2CACAE7D32_OFFSET))(this);
	}

	::System::Boolean Method_1_182007691F3936A9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_182007691F3936A9_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_A8366ADB00ACEE19(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_A8366ADB00ACEE19_OFFSET))(this, a1);
	}

	::Class_2_3ABA989E5AECB261* Method_1_F6A3F37ABA17EC81(::System::UInt32 a1)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F6A3F37ABA17EC81_OFFSET))(this, a1);
	}

	::System::Void Method_1_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_08BBACE844405300_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::UInt32>*>* Method_1_1C284B13E04C9453(::System::Double a1, ::System::Collections::Generic::List_1<::System::UInt32>*& a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*(*)(::PVOID, ::System::Double, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_1C284B13E04C9453_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1DD38BF5DB9EED2B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_1DD38BF5DB9EED2B_OFFSET))(this);
	}

	::System::Int32 Method_1_DAFA5FF3552EBD95(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_DAFA5FF3552EBD95_OFFSET))(this, a1);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Boolean Method_1_299BC5492663D815(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_299BC5492663D815_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_31014A0D551B9D91(::System::UInt32 a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_31014A0D551B9D91_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_970F81212EB01D53(::System::UInt32 a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a3, ::System::Boolean a4, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_970F81212EB01D53_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_57EB07CF37346FB2(::System::Collections::Generic::HashSet_1<::System::UInt32>*& a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>*& a2, ::System::Boolean a3, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Collections::Generic::HashSet_1<::System::UInt32>*&, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>*))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_57EB07CF37346FB2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_1_A37EF40E0E62AE02(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_A37EF40E0E62AE02_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3C696CB7BFAE965B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_3C696CB7BFAE965B_OFFSET))(this);
	}

	::System::Void Method_1_07EF0A77C5FD38D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_07EF0A77C5FD38D1_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_1_04D24A03108B3E43(::System::Collections::Generic::List_1<::System::UInt32>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_04D24A03108B3E43_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F2602FD3BB3FF8C(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_5F2602FD3BB3FF8C_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_8F7AD00CE70D0A7B(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_8F7AD00CE70D0A7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_7223CD34BEFCBF48_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_0A2FDFD9907A596E(::System::UInt32 a1, ::Class_1_FA4F4A67B1C04320_272*& a2, ::Class_1_FA4F4A67B1C04320_273*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_FA4F4A67B1C04320_272*&, ::Class_1_FA4F4A67B1C04320_273*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_0A2FDFD9907A596E_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_F8905EC1BD9330FD(::System::UInt32 a1, ::Class_1_FA4F4A67B1C04320_274*& a2, ::Class_1_FA4F4A67B1C04320_275*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_FA4F4A67B1C04320_274*&, ::Class_1_FA4F4A67B1C04320_275*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F8905EC1BD9330FD_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_0EE6DC0910F10862(::System::UInt32 a1)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_0EE6DC0910F10862_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_5F5970703C92B32A(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*& a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_5F5970703C92B32A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_469CB0742F2FBD6D(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_469CB0742F2FBD6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7542BD3335E796EB(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1DC52A0BEDF50632_2*>* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1DC52A0BEDF50632_2*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_7542BD3335E796EB_OFFSET))(this, a1, a2);
	}

	::Class_1_8AC8221DC4178532_1* Method_1_596C56D32701C9A4(::System::UInt32 a1)
	{
		return ((::Class_1_8AC8221DC4178532_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_596C56D32701C9A4_OFFSET))(this, a1);
	}

	::Class_1_E7C852659CE70433* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_E7C852659CE70433*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_B64C60973842FE45_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_3ABA989E5AECB261* Method_1_BEBC8F4773DC82AA()
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::UInt32 get_CurSectionId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_GET_CURSECTIONID_OFFSET))(this);
	}

	::System::Void set_CurSectionId(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_SET_CURSECTIONID_OFFSET))(this, value);
	}

	::System::UInt32 get_MaxSectionId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_GET_MAXSECTIONID_OFFSET))(this);
	}

	::System::Void set_MaxSectionId(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_SET_MAXSECTIONID_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_E7C852659CE70433*>* get_SectionDatas()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E7C852659CE70433*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_GET_SECTIONDATAS_OFFSET))(this);
	}

	::System::Void set_SectionDatas(::System::Collections::Generic::List_1<::Class_1_E7C852659CE70433*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_E7C852659CE70433*>*))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_SET_SECTIONDATAS_OFFSET))(this, value);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus get__FightStatus()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_GET__FIGHTSTATUS_OFFSET))(this);
	}

	::System::Void set__FightStatus(::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::FightStatus))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_SET__FIGHTSTATUS_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Boolean _IsAllPlayerBetFinished_b__9_0(::System::UInt32 item)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614__ISALLPLAYERBETFINISHED_B__9_0_OFFSET))(this, item);
	}

	::System::Boolean __TryAddSpecialEffectForVote_b__15_1(::System::UInt32 catId)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614___TRYADDSPECIALEFFECTFORVOTE_B__15_1_OFFSET))(this, catId);
	}

	::System::Boolean _IsAllOnlinePlayerVoteConfirmed_b__18_0(::System::UInt32 item)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E38D48D6A33D0614__ISALLONLINEPLAYERVOTECONFIRMED_B__18_0_OFFSET))(this, item);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1095;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class PinData; }
namespace RPG::Client::RelicSmartSuit { class PinDataKey; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_045F75CAE3CBF38C_METHOD_1_0063CCA62149B173_OFFSET UNITYSDK_OFFSET(0x1426BB30)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_182007691F3936A9_OFFSET UNITYSDK_OFFSET(0x1426BE60)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_59D7E82F6C7B771D_1_OFFSET UNITYSDK_OFFSET(0x1426BAE0)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_59D7E82F6C7B771D_OFFSET UNITYSDK_OFFSET(0x1426BA90)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_69DCE3A50C2BA385_OFFSET UNITYSDK_OFFSET(0x1426BCA0)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_706F3F0AC598ABB6_OFFSET UNITYSDK_OFFSET(0x1426BD20)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x1426C540)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_7952C32242C5A7A5_OFFSET UNITYSDK_OFFSET(0x1426B980)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x1426C660)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_BE7568CC6E95CCDD_OFFSET UNITYSDK_OFFSET(0x1426BF30)
#define CLASS_1_045F75CAE3CBF38C_METHOD_1_DEA74D742809CEB9_OFFSET UNITYSDK_OFFSET(0x1426BDF0)
#define CLASS_1_045F75CAE3CBF38C__CTOR_OFFSET UNITYSDK_OFFSET(0x1426BD10)

inline static constexpr unsigned int Class_1_045F75CAE3CBF38C_TypeDefinitionIndex = 69488;

class Class_1_045F75CAE3CBF38C : public ::System::Object
{
public:
	::RPG::Client::RelicSmartSuit::PinDataKey* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1095* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_1095* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1095*))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_7952C32242C5A7A5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_7952C32242C5A7A5_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::PinDataKey* Method_1_59D7E82F6C7B771D()
	{
		return ((::RPG::Client::RelicSmartSuit::PinDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_59D7E82F6C7B771D_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::PinData* Method_1_0063CCA62149B173()
	{
		return ((::RPG::Client::RelicSmartSuit::PinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_0063CCA62149B173_OFFSET))(this);
	}

	static ::Class_1_045F75CAE3CBF38C* Method_1_69DCE3A50C2BA385(::Class_0_16E4307DCC419505_1095* a1)
	{
		return ((::Class_1_045F75CAE3CBF38C*(*)(::Class_0_16E4307DCC419505_1095*))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_69DCE3A50C2BA385_OFFSET))(a1);
	}

	::System::Boolean Method_1_706F3F0AC598ABB6(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_706F3F0AC598ABB6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_DEA74D742809CEB9(::RPG::GameCore::RelicType a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_DEA74D742809CEB9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>* Method_1_BE7568CC6E95CCDD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_BE7568CC6E95CCDD_OFFSET))(this);
	}

	::System::Boolean Method_1_182007691F3936A9(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_182007691F3936A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::PinDataKey* Method_1_59D7E82F6C7B771D_1()
	{
		return ((::RPG::Client::RelicSmartSuit::PinDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_045F75CAE3CBF38C_METHOD_1_59D7E82F6C7B771D_1_OFFSET))(this);
	}
};

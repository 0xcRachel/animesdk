#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_MahJongAutoLayout; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace RPG::Client::Promises { class Promise; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_2ED20F664F54DB3A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEC9A590)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_01AE09CF60D743E7_OFFSET UNITYSDK_OFFSET(0xEC9BF80)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_138508F5F5843035_OFFSET UNITYSDK_OFFSET(0xEC9C6D0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0xEC9D340)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_19EEA5F0263FDCD2_OFFSET UNITYSDK_OFFSET(0xEC9B930)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_30E3663FDA3629F2_OFFSET UNITYSDK_OFFSET(0xEC9E6D0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_3570A4B3F52E8578_1_OFFSET UNITYSDK_OFFSET(0xEC9CF10)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_3570A4B3F52E8578_2_OFFSET UNITYSDK_OFFSET(0xEC9CFE0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_3570A4B3F52E8578_OFFSET UNITYSDK_OFFSET(0xEC9CE40)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_366C361708E0BB9C_OFFSET UNITYSDK_OFFSET(0xEC9AB50)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_3BCF0226A6CDC13B_1_OFFSET UNITYSDK_OFFSET(0xEC9DDC0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xEC9BB30)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0xEC9C070)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_3D43A24D099E6141_OFFSET UNITYSDK_OFFSET(0xEC9AA50)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xEC9A600)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_4D048E895C608EDE_OFFSET UNITYSDK_OFFSET(0xEC9C020)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_50B28C24D28E0D3B_1_OFFSET UNITYSDK_OFFSET(0xEC9AD70)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_50B28C24D28E0D3B_OFFSET UNITYSDK_OFFSET(0xEC9A670)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0xEC9D7D0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0xEC9DAB0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0xEC9B540)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xEC9B030)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_8B1A1F1BBD08B924_OFFSET UNITYSDK_OFFSET(0xEC9CDD0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xEC9ECE0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0xEC9B250)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xEC9CD90)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_A3EC82B23BD9F20F_OFFSET UNITYSDK_OFFSET(0xEC9CBF0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_A4370638FEFB157E_OFFSET UNITYSDK_OFFSET(0xEC9D540)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xEC9A520)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_B41938759AA1A77F_OFFSET UNITYSDK_OFFSET(0xEC9D0B0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xEC9D770)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xEC9CB40)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_E79AD51FB395FD4A_OFFSET UNITYSDK_OFFSET(0xEC9E8E0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0xEC9AAA0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xEC9C9B0)
#define CLASS_2_2ED20F664F54DB3A_METHOD_2_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0xEC9EAD0)
#define CLASS_2_2ED20F664F54DB3A__CTOR_OFFSET UNITYSDK_OFFSET(0xEC9EB90)
#define CLASS_2_2ED20F664F54DB3A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEC9ED50)

inline static constexpr unsigned int Class_2_2ED20F664F54DB3A_TypeDefinitionIndex = 64394;

class Class_2_2ED20F664F54DB3A : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::Promises::Promise* Field_2_4; // 0x18
	::RPG::Client::MonoEffectManager* Field_2_3; // 0x20
	::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>* Field_2_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_1; // 0x30
	::System::Single Field_2_5; // 0x38
	::System::Int32 Field_2_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50B28C24D28E0D3B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_50B28C24D28E0D3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_19EEA5F0263FDCD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_19EEA5F0263FDCD2_OFFSET))(this);
	}

	::System::Void Method_2_4D048E895C608EDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_4D048E895C608EDE_OFFSET))(this);
	}

	::System::Void Method_2_3CAB3F134E5CEF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_3CAB3F134E5CEF52_OFFSET))(this);
	}

	::System::Void Method_2_138508F5F5843035(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_138508F5F5843035_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_A3EC82B23BD9F20F(::RPG::Client::MonoEffectPluginMahJongItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_A3EC82B23BD9F20F_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_8B1A1F1BBD08B924()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_8B1A1F1BBD08B924_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* Method_2_3570A4B3F52E8578()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_3570A4B3F52E8578_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* Method_2_3570A4B3F52E8578_1()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_3570A4B3F52E8578_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>* Method_2_3570A4B3F52E8578_2()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginMahJongItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_3570A4B3F52E8578_2_OFFSET))(this);
	}

	::System::Void Method_2_B41938759AA1A77F(::RPG::Client::Effect_MahJongAutoLayout* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_MahJongAutoLayout*))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_B41938759AA1A77F_OFFSET))(this, a1);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Void Method_2_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_2_A4370638FEFB157E(::RPG::Client::MonoEffectPluginMahJongItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_A4370638FEFB157E_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Void Method_2_366C361708E0BB9C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_366C361708E0BB9C_OFFSET))(this, a1);
	}

	::System::Void Method_2_01AE09CF60D743E7(::RPG::Client::MonoEffectPluginMahJongItem* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_01AE09CF60D743E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_50B28C24D28E0D3B_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_50B28C24D28E0D3B_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_30E3663FDA3629F2(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_30E3663FDA3629F2_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_E79AD51FB395FD4A(::System::Int32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_E79AD51FB395FD4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Int32 Method_2_FD97D7184557CB1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_FD97D7184557CB1A_OFFSET))(this);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BCF0226A6CDC13B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_3BCF0226A6CDC13B_1_OFFSET))(this);
	}

	::RPG::Client::Effect_MahJongAutoLayout* Method_2_3D43A24D099E6141()
	{
		return ((::RPG::Client::Effect_MahJongAutoLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_3D43A24D099E6141_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ED20F664F54DB3A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

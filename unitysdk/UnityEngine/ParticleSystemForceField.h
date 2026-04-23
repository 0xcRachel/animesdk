#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/ParticleSystemForceFieldShape.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture3D; }

#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60F8A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_OFFSET UNITYSDK_OFFSET(0x1A60F860)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60F910)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_OFFSET UNITYSDK_OFFSET(0x1A60F8D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60F980)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_OFFSET UNITYSDK_OFFSET(0x1A60F940)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FB40)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x1A60FB00)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ENDRANGE_OFFSET UNITYSDK_OFFSET(0x1A60F730)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITYFOCUS_OFFSET UNITYSDK_OFFSET(0x1A60F770)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60F9F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1A60F9B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A60F750)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1A60F800)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A60F820)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FAD0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_OFFSET UNITYSDK_OFFSET(0x1A60FA90)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60F7C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_OFFSET UNITYSDK_OFFSET(0x1A60F790)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FA60)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1A60FA20)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1A60F6F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_STARTRANGE_OFFSET UNITYSDK_OFFSET(0x1A60F710)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FC20)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_OFFSET UNITYSDK_OFFSET(0x1A60FBE0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FBB0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_OFFSET UNITYSDK_OFFSET(0x1A60FB70)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELD_OFFSET UNITYSDK_OFFSET(0x1A60F840)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60F8C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_OFFSET UNITYSDK_OFFSET(0x1A60F8B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60F930)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_OFFSET UNITYSDK_OFFSET(0x1A60F920)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60F9A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_OFFSET UNITYSDK_OFFSET(0x1A60F990)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FB60)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x1A60FB50)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ENDRANGE_OFFSET UNITYSDK_OFFSET(0x1A60F740)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITYFOCUS_OFFSET UNITYSDK_OFFSET(0x1A60F780)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FA10)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1A60FA00)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A60F760)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1A60F810)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A60F830)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FAF0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_OFFSET UNITYSDK_OFFSET(0x1A60FAE0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60F7F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_OFFSET UNITYSDK_OFFSET(0x1A60F7D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FA80)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x1A60FA70)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1A60F700)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_STARTRANGE_OFFSET UNITYSDK_OFFSET(0x1A60F720)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FC40)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_OFFSET UNITYSDK_OFFSET(0x1A60FC30)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A60FBD0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_OFFSET UNITYSDK_OFFSET(0x1A60FBC0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELD_OFFSET UNITYSDK_OFFSET(0x1A60F850)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60FC50)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemForceField_TypeDefinitionIndex = 5517;

	class ParticleSystemForceField : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD__CTOR_OFFSET))(this);
		}

		::UnityEngine::ParticleSystemForceFieldShape get_shape()
		{
			return ((::UnityEngine::ParticleSystemForceFieldShape(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::ParticleSystemForceFieldShape value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemForceFieldShape))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_SHAPE_OFFSET))(this, value);
		}

		::System::Single get_startRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_STARTRANGE_OFFSET))(this);
		}

		::System::Void set_startRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_STARTRANGE_OFFSET))(this, value);
		}

		::System::Single get_endRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ENDRANGE_OFFSET))(this);
		}

		::System::Void set_endRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ENDRANGE_OFFSET))(this, value);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_length(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Single get_gravityFocus()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITYFOCUS_OFFSET))(this);
		}

		::System::Void set_gravityFocus(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITYFOCUS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_rotationRandomness()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_OFFSET))(this);
		}

		::System::Void set_rotationRandomness(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyDragByParticleSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyDragByParticleVelocity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleVelocity(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Texture3D* get_vectorField()
		{
			return ((::UnityEngine::Texture3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELD_OFFSET))(this);
		}

		::System::Void set_vectorField(::UnityEngine::Texture3D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture3D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELD_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_OFFSET))(this);
		}

		::System::Void set_directionX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_OFFSET))(this);
		}

		::System::Void set_directionY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_OFFSET))(this);
		}

		::System::Void set_directionZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_gravity()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_OFFSET))(this);
		}

		::System::Void set_rotationSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationAttraction()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_OFFSET))(this);
		}

		::System::Void set_rotationAttraction(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_drag()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_OFFSET))(this);
		}

		::System::Void set_drag(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_vectorFieldSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_OFFSET))(this);
		}

		::System::Void set_vectorFieldSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_vectorFieldAttraction()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_OFFSET))(this);
		}

		::System::Void set_vectorFieldAttraction(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_OFFSET))(this, value);
		}

		::System::Void get_rotationRandomness_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationRandomness_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_directionX_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_directionX_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_directionY_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_directionY_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_directionZ_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_directionZ_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_gravity_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_gravity_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rotationSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rotationAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_drag_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_drag_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_vectorFieldSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_vectorFieldSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_vectorFieldAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_vectorFieldAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_INJECTED_OFFSET))(this, value);
		}
	};
}

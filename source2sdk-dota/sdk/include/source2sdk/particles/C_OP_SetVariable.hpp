#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CParticleVariableRef.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xad8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetVariable : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "Variable"
            source2sdk::particleslib::CParticleVariableRef m_variableReference; // 0x1e0            
            // metadata: MPropertyFriendlyName "Value"
            // metadata: MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
            source2sdk::particleslib::CParticleTransformInput m_transformInput; // 0x230            
            // metadata: MPropertyFriendlyName "Position Offset"
            // metadata: MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
            Vector m_positionOffset; // 0x298            
            // metadata: MPropertyFriendlyName "Rotation Offset"
            // metadata: MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
            QAngle m_rotationOffset; // 0x2a4            
            // metadata: MPropertyFriendlyName "Value"
            // metadata: MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_VEC3"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecInput; // 0x2b0            
            // metadata: MPropertyFriendlyName "Value"
            // metadata: MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_FLOAT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_floatInput; // 0x968            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetVariable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetVariable) == 0xad8);
    };
};

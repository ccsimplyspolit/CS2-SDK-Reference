#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

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
        // Size: 0xaa8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_SetHitboxToModel : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1e0            
            // metadata: MPropertyFriendlyName "force to be inside model"
            std::int32_t m_nForceInModel; // 0x1e4            
            // metadata: MPropertyFriendlyName "even distribution"
            bool m_bEvenDistribution; // 0x1e8            
            uint8_t _pad01e9[0x3]; // 0x1e9
            // metadata: MPropertyFriendlyName "desired hitbox"
            std::int32_t m_nDesiredHitbox; // 0x1ec            
            // metadata: MPropertyFriendlyName "model hitbox scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x1f0            
            // metadata: MPropertyFriendlyName "direction bias"
            // metadata: MVectorIsCoordinate
            Vector m_vecDirectionBias; // 0x8a8            
            // metadata: MPropertyFriendlyName "maintain existing hitbox"
            bool m_bMaintainHitbox; // 0x8b4            
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x8b5            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x8b6            
            uint8_t _pad0936[0x2]; // 0x936
            // metadata: MPropertyFriendlyName "hitbox shell thickness"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flShellSize; // 0x938            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_SetHitboxToModel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_SetHitboxToModel) == 0xaa8);
    };
};

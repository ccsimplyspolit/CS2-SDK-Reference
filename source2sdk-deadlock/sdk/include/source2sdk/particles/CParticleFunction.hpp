#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticleEndcapMode_t.hpp"
#include "source2sdk/particles/ParticleToolsState_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1d8
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CParticleFunction
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyFriendlyName "operator strength"
            // metadata: MPropertySortPriority "-100"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOpStrength; // 0x8            
            // metadata: MPropertyFriendlyName "operator end cap state"
            // metadata: MPropertySortPriority "-100"
            source2sdk::particles::ParticleEndcapMode_t m_nOpEndCapState; // 0x178            
            // metadata: MPropertyFriendlyName "operator enabled in tools or game only"
            // metadata: MPropertySortPriority "-100"
            source2sdk::particles::ParticleToolsState_t m_nToolsState; // 0x17c            
            // metadata: MPropertyStartGroup "Operator Fade"
            // metadata: MPropertyFriendlyName "operator start fadein"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpStartFadeInTime; // 0x180            
            // metadata: MPropertyFriendlyName "operator end fadein"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpEndFadeInTime; // 0x184            
            // metadata: MPropertyFriendlyName "operator start fadeout"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpStartFadeOutTime; // 0x188            
            // metadata: MPropertyFriendlyName "operator end fadeout"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpEndFadeOutTime; // 0x18c            
            // metadata: MPropertyFriendlyName "operator fade oscillate"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpFadeOscillatePeriod; // 0x190            
            // metadata: MPropertyFriendlyName "normalize fade times to endcap"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            bool m_bNormalizeToStopTime; // 0x194            
            uint8_t _pad0195[0x3]; // 0x195
            // metadata: MPropertyStartGroup "Operator Fade Time Offset"
            // metadata: MPropertyFriendlyName "operator fade time offset min"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpTimeOffsetMin; // 0x198            
            // metadata: MPropertyFriendlyName "operator fade time offset max"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpTimeOffsetMax; // 0x19c            
            // metadata: MPropertyFriendlyName "operator fade time offset seed"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            std::int32_t m_nOpTimeOffsetSeed; // 0x1a0            
            // metadata: MPropertyStartGroup "Operator Fade Timescale Modifiers"
            // metadata: MPropertyFriendlyName "operator fade time scale seed"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            std::int32_t m_nOpTimeScaleSeed; // 0x1a4            
            // metadata: MPropertyFriendlyName "operator fade time scale min"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpTimeScaleMin; // 0x1a8            
            // metadata: MPropertyFriendlyName "operator fade time scale max"
            // metadata: MParticleAdvancedField
            // metadata: MPropertySortPriority "-100"
            float m_flOpTimeScaleMax; // 0x1ac            
            uint8_t _pad01b0[0x2]; // 0x1b0
            // metadata: MPropertyStartGroup
            // metadata: MPropertySuppressField
            bool m_bDisableOperator; // 0x1b2            
            uint8_t _pad01b3[0x5]; // 0x1b3
            // metadata: MPropertyFriendlyName "operator help and notes"
            // metadata: MParticleHelpField
            // metadata: MPropertySortPriority "-100"
            CUtlString m_Notes; // 0x1b8            
            uint8_t _pad01c0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleFunction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CParticleFunction) == 0x1d8);
    };
};

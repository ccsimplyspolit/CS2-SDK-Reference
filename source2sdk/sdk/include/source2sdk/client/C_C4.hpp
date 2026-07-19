#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C4LightEffect_t.hpp"
#include "source2sdk/client/C_CSWeaponBase.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1d20
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_C4 : public source2sdk::client::C_CSWeaponBase
        {
        public:
            source2sdk::client::ParticleIndex_t m_activeLightParticleIndex; // 0x1ce0            
            source2sdk::client::C4LightEffect_t m_eActiveLightEffect; // 0x1ce4            
            bool m_bStartedArming; // 0x1ce8            
            uint8_t _pad1ce9[0x3]; // 0x1ce9
            source2sdk::entity2::GameTime_t m_fArmedTime; // 0x1cec            
            bool m_bBombPlacedAnimation; // 0x1cf0            
            bool m_bIsPlantingViaUse; // 0x1cf1            
            uint8_t _pad1cf2[0x6]; // 0x1cf2
            source2sdk::client::EntitySpottedState_t m_entitySpottedState; // 0x1cf8            
            std::int32_t m_nSpotRules; // 0x1d10            
            bool m_bPlayedArmingBeeps[7]; // 0x1d14            
            bool m_bBombPlanted; // 0x1d1b            
            uint8_t _pad1d1c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_C4 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_C4) == 0x1d20);
    };
};

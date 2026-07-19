#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Meepo_MegaMeepo : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a58            
            float m_flOffset; // 0x1a5c            
            QAngle m_vStartAngles; // 0x1a60            
            VectorWS m_vStartLocation; // 0x1a6c            
            bool m_bInterrupted; // 0x1a78            
            bool m_bHasBeenDestroyed; // 0x1a79            
            bool m_bIsHighestMeepo; // 0x1a7a            
            uint8_t _pad1a7b[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_MegaMeepo because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Meepo_MegaMeepo) == 0x1a80);
    };
};

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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind : public source2sdk::client::CDOTA_Buff
        {
        public:
            float slow; // 0x1a58            
            std::int32_t magic_resistance; // 0x1a5c            
            float stun_duration; // 0x1a60            
            VectorWS vLastPos; // 0x1a64            
            bool bResetPosition; // 0x1a70            
            uint8_t _pad1a71[0x3]; // 0x1a71
            float m_fAccumulatedDistance; // 0x1a74            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a78            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x1a7c            
            bool m_bStunned; // 0x1a80            
            uint8_t _pad1a81[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind) == 0x1a88);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TutorialNPCBlocker : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vecStart; // 0x1a58            
            VectorWS m_vecEnd; // 0x1a64            
            VectorWS m_vecCenter; // 0x1a70            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a7c            
            bool m_bHidden; // 0x1a80            
            uint8_t _pad1a81[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TutorialNPCBlocker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TutorialNPCBlocker) == 0x1a88);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_Spotlight_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool self_spotlight; // 0x1a58            
            uint8_t _pad1a59[0x3]; // 0x1a59
            float radius; // 0x1a5c            
            float initial_speed; // 0x1a60            
            float sweep_speed; // 0x1a64            
            float sweep_radius; // 0x1a68            
            float linger_duration; // 0x1a6c            
            std::int32_t spotlight_index; // 0x1a70            
            VectorWS m_vStartLocation; // 0x1a74            
            VectorWS m_vTargetLocation; // 0x1a80            
            float m_flTargetReachedTime; // 0x1a8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Spotlight_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_Spotlight_Thinker) == 0x1a90);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_SunStrike_Cataclysm : public source2sdk::client::CDOTA_Buff
        {
        public:
            float area_of_effect; // 0x1a58            
            float damage; // 0x1a5c            
            float vision_distance; // 0x1a60            
            float vision_duration; // 0x1a64            
            float spell_amp; // 0x1a68            
            float spell_lifesteal; // 0x1a6c            
            VectorWS m_vSoundPos; // 0x1a70            
            bool m_bPlaySound; // 0x1a7c            
            uint8_t _pad1a7d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_SunStrike_Cataclysm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_SunStrike_Cataclysm) == 0x1a80);
    };
};

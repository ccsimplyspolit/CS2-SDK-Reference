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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_Swashbuckle : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nStrikesLeft; // 0x1a58            
            float attack_interval; // 0x1a5c            
            VectorWS m_vSpawnPos; // 0x1a60            
            Vector m_vStrikeDir; // 0x1a6c            
            VectorWS m_vDashPos; // 0x1a78            
            bool m_bApplyDamagePenalty; // 0x1a84            
            uint8_t _pad1a85[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Swashbuckle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pangolier_Swashbuckle) == 0x1a88);
    };
};

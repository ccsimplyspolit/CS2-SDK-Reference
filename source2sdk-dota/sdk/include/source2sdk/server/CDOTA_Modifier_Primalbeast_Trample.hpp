#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Primalbeast_Trample : public source2sdk::client::CDOTA_Buff
        {
        public:
            float effect_radius; // 0x1a58            
            VectorWS vLastPos; // 0x1a5c            
            float flCurrentDistance; // 0x1a68            
            std::int32_t step_distance; // 0x1a6c            
            std::int32_t bonus_magic_resistance; // 0x1a70            
            bool m_bIsUnslowable; // 0x1a74            
            uint8_t _pad1a75[0x3]; // 0x1a75
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a78            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Primalbeast_Trample because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Primalbeast_Trample) == 0x1a90);
    };
};

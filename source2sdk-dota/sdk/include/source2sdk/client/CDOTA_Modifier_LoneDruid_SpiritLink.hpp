#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LoneDruid_SpiritLink : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_movement_speed_druid; // 0x1a58            
            std::int32_t bonus_movement_speed_bear; // 0x1a5c            
            std::int32_t lifesteal_percent; // 0x1a60            
            std::int32_t creep_lifesteal_penalty; // 0x1a64            
            std::int32_t armor; // 0x1a68            
            std::int32_t active_bonus; // 0x1a6c            
            std::int32_t lifesteal_both_ways; // 0x1a70            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LoneDruid_SpiritLink because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_LoneDruid_SpiritLink) == 0x1a78);
    };
};

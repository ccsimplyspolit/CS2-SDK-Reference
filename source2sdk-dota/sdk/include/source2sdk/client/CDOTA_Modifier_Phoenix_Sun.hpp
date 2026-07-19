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
        class CDOTA_Modifier_Phoenix_Sun : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_radius; // 0x1a58            
            float stun_duration; // 0x1a5c            
            std::int32_t max_hero_attacks; // 0x1a60            
            std::int32_t max_hero_attacks_scepter; // 0x1a64            
            std::int32_t max_hero_attacks_required; // 0x1a68            
            // m_hSecondaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSecondaryTarget;
            char m_hSecondaryTarget[0x4]; // 0x1a6c            
            std::int32_t m_iAttackCount; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_Sun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Phoenix_Sun) == 0x1a78);
    };
};

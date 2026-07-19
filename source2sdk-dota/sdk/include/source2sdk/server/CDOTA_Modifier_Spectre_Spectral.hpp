#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spectre_Spectral : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t speed_bonus; // 0x1a58            
            std::int32_t radius; // 0x1a5c            
            float linger_time; // 0x1a60            
            bool m_bSpeedBonus; // 0x1a64            
            uint8_t _pad1a65[0x3]; // 0x1a65
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0x1a68            
            source2sdk::entity2::GameTime_t m_flLingerUntil; // 0x1a6c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_Spectral because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Spectre_Spectral) == 0x1a78);
    };
};

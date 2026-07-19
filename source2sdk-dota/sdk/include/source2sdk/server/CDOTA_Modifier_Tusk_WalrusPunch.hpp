#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tusk_WalrusPunch : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t crit_multiplier; // 0x1a58            
            std::int32_t bonus_damage; // 0x1a5c            
            float air_time; // 0x1a60            
            float slow_duration; // 0x1a64            
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1a68            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a70            
            bool m_bWalrusPunch; // 0x1a74            
            bool m_bTalentProc; // 0x1a75            
            uint8_t _pad1a76[0x2]; // 0x1a76
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a78            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a90            
            source2sdk::client::AttackRecord_t m_nAttackRecord; // 0x1a94            
            uint8_t _pad1a96[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tusk_WalrusPunch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tusk_WalrusPunch) == 0x1a98);
    };
};

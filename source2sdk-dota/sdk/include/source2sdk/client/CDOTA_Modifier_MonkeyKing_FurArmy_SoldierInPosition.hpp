#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vTargetPos; // 0x1a58            
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0x1a64            
            float attack_speed; // 0x1a68            
            float final_radius; // 0x1a6c            
            float third_radius; // 0x1a70            
            float second_radius; // 0x1a74            
            std::int32_t outer_attack_buffer; // 0x1a78            
            std::int32_t attack_speed_pct; // 0x1a7c            
            std::int32_t damage_pct; // 0x1a80            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x1a84            
            bool m_bDisarmed; // 0x1a88            
            uint8_t _pad1a89[0x3]; // 0x1a89
            source2sdk::entity2::GameTime_t m_flNextAttackTime; // 0x1a8c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a90            
            bool m_bAutoSpawn; // 0x1a94            
            uint8_t _pad1a95[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_MonkeyKing_FurArmy_SoldierInPosition) == 0x1a98);
    };
};

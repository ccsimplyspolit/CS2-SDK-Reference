#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct sSpiritInfo;
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
        // Size: 0x1ad8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DeathProphet_Exorcism : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            std::int32_t spirit_speed; // 0x1a5c            
            std::int32_t max_distance; // 0x1a60            
            std::int32_t give_up_distance; // 0x1a64            
            std::int32_t heal_percent; // 0x1a68            
            std::int32_t spirit_duration; // 0x1a6c            
            float ghost_spawn_rate; // 0x1a70            
            std::int32_t movement_bonus; // 0x1a74            
            float m_flBonusExorcismDuration; // 0x1a78            
            std::int32_t m_iSpirits; // 0x1a7c            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1a80            
            source2sdk::entity2::GameTime_t m_fLastThinkTime; // 0x1a84            
            source2sdk::entity2::GameTime_t m_fSpawnTime; // 0x1a88            
            bool m_bFirstSpawn; // 0x1a8c            
            bool m_bCommentedOnExpired; // 0x1a8d            
            bool m_bForceExpired; // 0x1a8e            
            uint8_t _pad1a8f[0x1]; // 0x1a8f
            // m_vecDeadHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecDeadHeroes;
            char m_vecDeadHeroes[0x18]; // 0x1a90            
            // m_vecSpirits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sSpiritInfo*> m_vecSpirits;
            char m_vecSpirits[0x18]; // 0x1aa8            
            uint8_t _pad1ac0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_Exorcism because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DeathProphet_Exorcism) == 0x1ad8);
    };
};

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
        // Size: 0x1ad8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Invoker_IceWall_VectorTarget_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow; // 0x1a58            
            float slow_duration; // 0x1a5c            
            float root_duration; // 0x1a60            
            float damage_per_second; // 0x1a64            
            float root_damage; // 0x1a68            
            float tick_interval; // 0x1a6c            
            float wall_total_length; // 0x1a70            
            float wall_width; // 0x1a74            
            VectorWS m_vWallCenter; // 0x1a78            
            Vector m_vWallDirection; // 0x1a84            
            VectorWS m_vWallRight; // 0x1a90            
            VectorWS m_vWallLeft; // 0x1a9c            
            source2sdk::client::ParticleIndex_t m_nParticleIndexA; // 0x1aa8            
            source2sdk::client::ParticleIndex_t m_nParticleIndexB; // 0x1aac            
            bool m_bStartedExpanding; // 0x1ab0            
            uint8_t _pad1ab1[0x3]; // 0x1ab1
            float glacier_formation_speed; // 0x1ab4            
            source2sdk::entity2::GameTime_t m_flFormationStartTime; // 0x1ab8            
            bool m_bGrantedGem; // 0x1abc            
            uint8_t _pad1abd[0x3]; // 0x1abd
            // m_vecEnemiesInWall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecEnemiesInWall;
            char m_vecEnemiesInWall[0x18]; // 0x1ac0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_VectorTarget_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_IceWall_VectorTarget_Thinker) == 0x1ad8);
    };
};

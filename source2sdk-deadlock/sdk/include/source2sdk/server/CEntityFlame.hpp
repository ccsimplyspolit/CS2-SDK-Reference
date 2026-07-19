#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEntAttached"
        // static metadata: MNetworkVarNames "bool m_bCheapEffect"
        #pragma pack(push, 1)
        class CEntityFlame : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hEntAttached has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntAttached;
            char m_hEntAttached[0x4]; // 0x4a0            
            // metadata: MNetworkEnable
            bool m_bCheapEffect; // 0x4a4            
            uint8_t _pad04a5[0x3]; // 0x4a5
            float m_flSize; // 0x4a8            
            // metadata: MNotSaved
            bool m_bUseHitboxes; // 0x4ac            
            uint8_t _pad04ad[0x3]; // 0x4ad
            // metadata: MNotSaved
            std::int32_t m_iNumHitboxFires; // 0x4b0            
            // metadata: MNotSaved
            float m_flHitboxFireScale; // 0x4b4            
            source2sdk::entity2::GameTime_t m_flLifetime; // 0x4b8            
            // metadata: MNotSaved
            // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttacker;
            char m_hAttacker[0x4]; // 0x4bc            
            source2sdk::server::AI_VolumetricEventHandle_t m_iDangerSound; // 0x4c0            
            // metadata: MNotSaved
            float m_flDirectDamagePerSecond; // 0x4c8            
            // metadata: MNotSaved
            std::int32_t m_iCustomDamageType; // 0x4cc            
            uint8_t _pad04d0[0x18];
            
            // Datamap fields:
            // void m_hPlayingSound; // 0x4d0
            // void CEntityFlameFlameThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEntityFlame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEntityFlame) == 0x4e8);
    };
};

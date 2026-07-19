#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Construct allowed
        #pragma pack(push, 1)
        class CEntityFlame : public source2sdk::server::CBaseEntity
        {
        public:
            // m_hEntAttached has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntAttached;
            char m_hEntAttached[0x4]; // 0x4a8            
            bool m_bCheapEffect; // 0x4ac            
            uint8_t _pad04ad[0x3]; // 0x4ad
            float m_flSize; // 0x4b0            
            // metadata: MNotSaved
            bool m_bUseHitboxes; // 0x4b4            
            uint8_t _pad04b5[0x3]; // 0x4b5
            // metadata: MNotSaved
            std::int32_t m_iNumHitboxFires; // 0x4b8            
            // metadata: MNotSaved
            float m_flHitboxFireScale; // 0x4bc            
            source2sdk::entity2::GameTime_t m_flLifetime; // 0x4c0            
            // metadata: MNotSaved
            // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttacker;
            char m_hAttacker[0x4]; // 0x4c4            
            // metadata: MNotSaved
            float m_flDirectDamagePerSecond; // 0x4c8            
            // metadata: MNotSaved
            std::int32_t m_iCustomDamageType; // 0x4cc            
            uint8_t _pad04d0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEntityFlame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEntityFlame) == 0x4e8);
    };
};

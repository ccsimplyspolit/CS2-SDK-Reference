#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x78
        // Has VTable
        #pragma pack(push, 1)
        class CAI_EnemyServices : public source2sdk::client::CAI_Component
        {
        public:
            // m_hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemy;
            char m_hEnemy[0x4]; // 0x50            
            // m_hLastEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastEnemy;
            char m_hLastEnemy[0x4]; // 0x54            
            source2sdk::entity2::GameTime_t m_flTimeEnemyAcquired; // 0x58            
            bool m_bHasEnemyAcquired; // 0x5c            
            uint8_t _pad005d[0x3]; // 0x5d
            source2sdk::entity2::GameTime_t m_flTimeLastHadEnemy; // 0x60            
            bool m_bHasLastHadEnemy; // 0x64            
            uint8_t _pad0065[0x3]; // 0x65
            std::int32_t m_nEnemiesSerialNumber; // 0x68            
            // m_hEnemyOccluder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEnemyOccluder;
            char m_hEnemyOccluder[0x4]; // 0x6c            
            uint8_t _pad0070[0x8];
            
            // Datamap fields:
            // void m_pEnemies; // 0x70
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_EnemyServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_EnemyServices) == 0x78);
    };
};

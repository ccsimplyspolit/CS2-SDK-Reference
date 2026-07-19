#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flEndTime"
        // static metadata: MNetworkVarNames "EHANDLE m_hPlayerEntToStore"
        #pragma pack(push, 1)
        class CCitadelRecentDamage
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flEndTime; // 0x10            
            // metadata: MNetworkEnable
            // m_hPlayerEntToStore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPlayerEntToStore;
            char m_hPlayerEntToStore[0x4]; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelRecentDamage, m_flLastDamageTime) == 0x8);
        static_assert(offsetof(source2sdk::client::CCitadelRecentDamage, m_flStartTime) == 0xc);
        static_assert(offsetof(source2sdk::client::CCitadelRecentDamage, m_flEndTime) == 0x10);
        static_assert(offsetof(source2sdk::client::CCitadelRecentDamage, m_hPlayerEntToStore) == 0x14);
        
        static_assert(sizeof(source2sdk::client::CCitadelRecentDamage) == 0x18);
    };
};

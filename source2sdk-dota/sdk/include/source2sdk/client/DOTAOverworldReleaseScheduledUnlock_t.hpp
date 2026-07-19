#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/OverworldRoomGroupID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct DOTAOverworldReleaseScheduledUnlock_t
        {
        public:
            CUtlString m_strLocName; // 0x0            
            CUtlString m_strVisualNovelName; // 0x8            
            CUtlString m_strRingmasterVisualNovelName; // 0x10            
            std::uint32_t m_unReleaseTime; // 0x18            
            source2sdk::client::OverworldRoomGroupID_t m_unGroupID; // 0x1c            
            uint8_t _pad001d[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTAOverworldReleaseScheduledUnlock_t, m_strLocName) == 0x0);
        static_assert(offsetof(source2sdk::client::DOTAOverworldReleaseScheduledUnlock_t, m_strVisualNovelName) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTAOverworldReleaseScheduledUnlock_t, m_strRingmasterVisualNovelName) == 0x10);
        static_assert(offsetof(source2sdk::client::DOTAOverworldReleaseScheduledUnlock_t, m_unReleaseTime) == 0x18);
        static_assert(offsetof(source2sdk::client::DOTAOverworldReleaseScheduledUnlock_t, m_unGroupID) == 0x1c);
        
        static_assert(sizeof(source2sdk::client::DOTAOverworldReleaseScheduledUnlock_t) == 0x20);
    };
};

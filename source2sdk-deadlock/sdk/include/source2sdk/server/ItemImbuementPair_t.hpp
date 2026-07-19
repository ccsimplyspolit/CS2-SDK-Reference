#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "AbilityID_t m_SourceItemID"
        // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecImbuedAbilities"
        #pragma pack(push, 1)
        struct ItemImbuementPair_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            CUtlStringToken m_SourceItemID; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // metadata: MNetworkEnable
            // m_vecImbuedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlStringToken> m_vecImbuedAbilities;
            char m_vecImbuedAbilities[0x18]; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::ItemImbuementPair_t, m_SourceItemID) == 0x30);
        static_assert(offsetof(source2sdk::server::ItemImbuementPair_t, m_vecImbuedAbilities) == 0x38);
        
        static_assert(sizeof(source2sdk::server::ItemImbuementPair_t) == 0x50);
    };
};

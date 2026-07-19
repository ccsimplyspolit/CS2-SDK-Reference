#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ItemDraftOption_t.hpp"
#include "source2sdk/client/ItemDraftRoundID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ItemDraftOption_t m_vecOptions"
        // static metadata: MNetworkVarNames "ItemDraftRoundID_t m_nID"
        // static metadata: MNetworkVarNames "int m_nDraftsRemaining"
        // static metadata: MNetworkVarNames "int m_nDraftsTotal"
        // static metadata: MNetworkVarNames "int m_nRoundsRemaining"
        // static metadata: MNetworkVarNames "int m_nRoundsTotal"
        #pragma pack(push, 1)
        struct ItemDraftRoundState_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // m_vecOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::ItemDraftOption_t> m_vecOptions;
            char m_vecOptions[0x68]; // 0x8            
            // metadata: MNetworkEnable
            source2sdk::client::ItemDraftRoundID_t m_nID; // 0x70            
            // metadata: MNetworkEnable
            std::int32_t m_nDraftsRemaining; // 0x74            
            // metadata: MNetworkEnable
            std::int32_t m_nDraftsTotal; // 0x78            
            // metadata: MNetworkEnable
            std::int32_t m_nRoundsRemaining; // 0x7c            
            // metadata: MNetworkEnable
            std::int32_t m_nRoundsTotal; // 0x80            
            source2sdk::entity2::GameTime_t m_flCompletedTime; // 0x84            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ItemDraftRoundState_t, m_vecOptions) == 0x8);
        static_assert(offsetof(source2sdk::client::ItemDraftRoundState_t, m_nID) == 0x70);
        static_assert(offsetof(source2sdk::client::ItemDraftRoundState_t, m_nDraftsRemaining) == 0x74);
        static_assert(offsetof(source2sdk::client::ItemDraftRoundState_t, m_nDraftsTotal) == 0x78);
        static_assert(offsetof(source2sdk::client::ItemDraftRoundState_t, m_nRoundsRemaining) == 0x7c);
        static_assert(offsetof(source2sdk::client::ItemDraftRoundState_t, m_nRoundsTotal) == 0x80);
        static_assert(offsetof(source2sdk::client::ItemDraftRoundState_t, m_flCompletedTime) == 0x84);
        
        static_assert(sizeof(source2sdk::client::ItemDraftRoundState_t) == 0x88);
    };
};

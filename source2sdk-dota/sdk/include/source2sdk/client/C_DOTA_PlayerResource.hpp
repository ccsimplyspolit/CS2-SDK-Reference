#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/PlayerResourceBroadcasterData_t.hpp"
#include "source2sdk/client/PlayerResourcePlayerData_t.hpp"
#include "source2sdk/client/PlayerResourcePlayerTeamData_t.hpp"
#include "source2sdk/client/PlayerSeatAssignment_t.hpp"
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
        struct C_DOTA_Unit_Courier;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct PlayerSeatAssignment_t;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x35b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_DOTA_PlayerResource : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0x10]; // 0x5f0
            bool m_bWasDataUpdateCreated; // 0x600            
            uint8_t _pad0601[0x7]; // 0x601
            // m_vecPlayerTeamData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourcePlayerTeamData_t> m_vecPlayerTeamData;
            char m_vecPlayerTeamData[0x68]; // 0x608            
            // m_vecPlayerData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourcePlayerData_t> m_vecPlayerData;
            char m_vecPlayerData[0x68]; // 0x670            
            // m_vecBrodcasterData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourceBroadcasterData_t> m_vecBrodcasterData;
            char m_vecBrodcasterData[0x68]; // 0x6d8            
            // m_vecEventsForDisplay has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint32_t> m_vecEventsForDisplay;
            char m_vecEventsForDisplay[0x18]; // 0x740            
            std::int8_t m_nPrimaryEventIndex; // 0x758            
            uint8_t _pad0759[0x3]; // 0x759
            std::uint32_t m_nObsoleteEventIDAssociatedWithEventData; // 0x75c            
            // m_playerIDToPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_playerIDToPlayer[64];
            char m_playerIDToPlayer[0x100]; // 0x760            
            // m_playerIDToPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_playerIDToPawn[64];
            char m_playerIDToPawn[0x100]; // 0x860            
            CUtlSymbolLarge m_iszName[64]; // 0x960            
            CUtlSymbolLarge m_iszHTMLSafeName[64]; // 0xb60            
            CUtlSymbolLarge m_iszFilteredHTMLSafeName[64]; // 0xd60            
            uint8_t _pad0f60[0x1900]; // 0xf60
            bool m_bDirtySelection; // 0x2860            
            bool m_bHasWorldTreesChanged; // 0x2861            
            bool m_bWorldTreeModelsChanged; // 0x2862            
            bool m_bSwapWillingness[24]; // 0x2863            
            uint8_t _pad287b[0x3d]; // 0x287b
            // m_hTeamCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_DOTA_Unit_Courier>> m_hTeamCouriers[15];
            char m_hTeamCouriers[0x168]; // 0x28b8            
            // m_hPlayerCouriers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_DOTA_Unit_Courier>> m_hPlayerCouriers[64];
            char m_hPlayerCouriers[0x600]; // 0x2a20            
            // m_vecOnstageHomeTeams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_vecOnstageHomeTeams;
            char m_vecOnstageHomeTeams[0x18]; // 0x3020            
            source2sdk::client::PlayerSeatAssignment_t* m_pPlayerIDToOnstageSlot[24]; // 0x3038            
            // m_vecOnstagePlayerSeats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerSeatAssignment_t> m_vecOnstagePlayerSeats;
            char m_vecOnstagePlayerSeats[0x18]; // 0x30f8            
            std::int32_t m_nEventNPCReplaced; // 0x3110            
            std::int32_t m_nEventPlayerInfo; // 0x3114            
            std::int32_t m_nInventoryUpdated; // 0x3118            
            uint8_t _pad311c[0x494];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_PlayerResource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_PlayerResource) == 0x35b0);
    };
};

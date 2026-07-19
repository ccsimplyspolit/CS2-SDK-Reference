#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
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
        // Size: 0x4b8
        // Has VTable
        #pragma pack(push, 1)
        class CInfoTeamSpawn : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            bool m_bIntroSpawn; // 0x4a0            
            uint8_t _pad04a1[0x3]; // 0x4a1
            std::int32_t m_iLaneNum; // 0x4a4            
            CUtlSymbolLarge m_strGroupTag; // 0x4a8            
            // metadata: MNotSaved
            // m_hAssignedPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAssignedPlayer;
            char m_hAssignedPlayer[0x4]; // 0x4b0            
            uint8_t _pad04b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoTeamSpawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoTeamSpawn) == 0x4b8);
    };
};

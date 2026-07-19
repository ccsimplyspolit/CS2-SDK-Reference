#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // Size: 0x550
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CTeam : public source2sdk::server::CBaseEntity
        {
        public:
            // m_aPlayerControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBasePlayerController>> m_aPlayerControllers;
            char m_aPlayerControllers[0x18]; // 0x498            
            // m_aPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBasePlayerPawn>> m_aPlayers;
            char m_aPlayers[0x18]; // 0x4b0            
            std::int32_t m_iScore; // 0x4c8            
            char m_szTeamname[129]; // 0x4cc            
            uint8_t _pad054d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTeam) == 0x550);
    };
};

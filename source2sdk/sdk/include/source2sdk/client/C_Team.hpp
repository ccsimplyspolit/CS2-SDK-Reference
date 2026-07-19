#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerPawn;
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
        // Size: 0x6b8
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_Team : public source2sdk::client::C_BaseEntity
        {
        public:
            // m_aPlayerControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::CBasePlayerController>> m_aPlayerControllers;
            char m_aPlayerControllers[0x18]; // 0x600            
            // m_aPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BasePlayerPawn>> m_aPlayers;
            char m_aPlayers[0x18]; // 0x618            
            std::int32_t m_iScore; // 0x630            
            char m_szTeamname[129]; // 0x634            
            uint8_t _pad06b5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Team because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Team) == 0x6b8);
    };
};

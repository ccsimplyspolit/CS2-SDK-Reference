#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_BountyHunter_Big_Game_Hunter : public source2sdk::server::CDOTABaseAbility
        {
        public:
            source2sdk::client::PlayerID_t m_iFirstPlayer; // 0x580            
            source2sdk::client::PlayerID_t m_iSecondPlayer; // 0x584            
            source2sdk::client::PlayerID_t m_iThirdPlayer; // 0x588            
            uint8_t _pad058c[0x4]; // 0x58c
            // m_CurrentTopPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerID_t> m_CurrentTopPlayers;
            char m_CurrentTopPlayers[0x18]; // 0x590            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_BountyHunter_Big_Game_Hunter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_BountyHunter_Big_Game_Hunter) == 0x5a8);
    };
};

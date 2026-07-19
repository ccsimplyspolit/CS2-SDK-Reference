#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/PlayerID_t.hpp"

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
        // Size: 0x6d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_BountyHunter_Big_Game_Hunter : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            source2sdk::client::PlayerID_t m_iFirstPlayer; // 0x6a8            
            source2sdk::client::PlayerID_t m_iSecondPlayer; // 0x6ac            
            source2sdk::client::PlayerID_t m_iThirdPlayer; // 0x6b0            
            uint8_t _pad06b4[0x4]; // 0x6b4
            // m_CurrentTopPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::PlayerID_t> m_CurrentTopPlayers;
            char m_CurrentTopPlayers[0x18]; // 0x6b8            
            uint8_t _pad06d0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_BountyHunter_Big_Game_Hunter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_BountyHunter_Big_Game_Hunter) == 0x6d8);
    };
};

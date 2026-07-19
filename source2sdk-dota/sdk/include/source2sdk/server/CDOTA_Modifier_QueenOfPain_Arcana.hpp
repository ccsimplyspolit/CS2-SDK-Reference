#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_QueenOfPain_Arcana : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_vecHitPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::PlayerID_t,bool> m_vecHitPlayers;
            char m_vecHitPlayers[0x28]; // 0x1a58            
            // m_vecKilledPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::PlayerID_t,bool> m_vecKilledPlayers;
            char m_vecKilledPlayers[0x28]; // 0x1a80            
            source2sdk::entity2::GameTime_t m_flLastSonicWaveCast; // 0x1aa8            
            bool m_bSpeechComplete; // 0x1aac            
            bool m_bMessageComplete; // 0x1aad            
            bool m_bIsMeleeAttack; // 0x1aae            
            uint8_t _pad1aaf[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_QueenOfPain_Arcana because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_QueenOfPain_Arcana) == 0x1ab0);
    };
};

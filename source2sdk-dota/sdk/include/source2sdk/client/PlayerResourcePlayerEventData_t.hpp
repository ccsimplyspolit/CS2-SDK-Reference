#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerResourcePlayerPeriodicResourceData_t.hpp"

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
        // Size: 0x100
        // Has VTable
        #pragma pack(push, 1)
        struct PlayerResourcePlayerEventData_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            std::uint32_t m_iEventID; // 0x30            
            std::uint32_t m_iEventLevel; // 0x34            
            std::uint32_t m_iEventPoints; // 0x38            
            std::uint32_t m_iEventPremiumPoints; // 0x3c            
            std::uint32_t m_iEventEffectsMask; // 0x40            
            bool m_bIsEventOwned; // 0x44            
            uint8_t _pad0045[0x3]; // 0x45
            std::uint32_t m_iFavoriteTeam; // 0x48            
            std::uint16_t m_iFavoriteTeamQuality; // 0x4c            
            std::uint8_t m_iAvailableSalutes; // 0x4e            
            std::uint8_t m_iSaluteAmountIndex; // 0x4f            
            std::uint32_t m_iEventWagerStreak; // 0x50            
            std::uint8_t m_iEventTeleportFXLevel; // 0x54            
            uint8_t _pad0055[0x3]; // 0x55
            std::int32_t m_nCandyPointsReason[5]; // 0x58            
            uint8_t _pad006c[0x4]; // 0x6c
            // m_vecPeriodicResources has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PlayerResourcePlayerPeriodicResourceData_t> m_vecPeriodicResources;
            char m_vecPeriodicResources[0x68]; // 0x70            
            std::uint8_t m_iObsoleteSaluteAmounts; // 0xd8            
            uint8_t _pad00d9[0x3]; // 0xd9
            std::uint32_t m_iObsoleteEventArcanaPeriodicResourceRemaining; // 0xdc            
            std::uint32_t m_iObsoleteEventArcanaPeriodicResourceMax; // 0xe0            
            std::uint32_t m_iObsoleteEventWagerTokensRemaining; // 0xe4            
            std::uint32_t m_iObsoleteEventWagerTokensMax; // 0xe8            
            std::uint32_t m_iObsoleteEventBountiesRemaining; // 0xec            
            std::uint32_t m_iObsoleteRankWagersAvailable; // 0xf0            
            std::uint32_t m_iObsoleteRankWagersMax; // 0xf4            
            std::uint32_t m_iObsoleteEventPointAdjustmentsRemaining; // 0xf8            
            std::uint16_t m_iObsoleteEventRanks; // 0xfc            
            uint8_t _pad00fe[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventID) == 0x30);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventLevel) == 0x34);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventPoints) == 0x38);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventPremiumPoints) == 0x3c);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventEffectsMask) == 0x40);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_bIsEventOwned) == 0x44);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iFavoriteTeam) == 0x48);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iFavoriteTeamQuality) == 0x4c);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iAvailableSalutes) == 0x4e);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iSaluteAmountIndex) == 0x4f);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventWagerStreak) == 0x50);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iEventTeleportFXLevel) == 0x54);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_nCandyPointsReason) == 0x58);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_vecPeriodicResources) == 0x70);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteSaluteAmounts) == 0xd8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventArcanaPeriodicResourceRemaining) == 0xdc);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventArcanaPeriodicResourceMax) == 0xe0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventWagerTokensRemaining) == 0xe4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventWagerTokensMax) == 0xe8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventBountiesRemaining) == 0xec);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteRankWagersAvailable) == 0xf0);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteRankWagersMax) == 0xf4);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventPointAdjustmentsRemaining) == 0xf8);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerEventData_t, m_iObsoleteEventRanks) == 0xfc);
        
        static_assert(sizeof(source2sdk::client::PlayerResourcePlayerEventData_t) == 0x100);
    };
};

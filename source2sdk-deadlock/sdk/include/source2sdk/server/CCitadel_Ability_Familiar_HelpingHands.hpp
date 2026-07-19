#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0x1320
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_vecHelpers"
        // static metadata: MNetworkVarNames "GameTime_t m_tChoreUseCooldownEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tSoonestHelperCooldownEndTime"
        // static metadata: MNetworkVarNames "char m_nAvailableHelperCount"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_HelpingHands : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x8]; // 0xf70
            // metadata: MNetworkEnable
            // m_vecHelpers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecHelpers;
            char m_vecHelpers[0x18]; // 0xf78            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tChoreUseCooldownEndTime; // 0xf90            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tSoonestHelperCooldownEndTime; // 0xf94            
            // metadata: MNetworkEnable
            char m_nAvailableHelperCount; // 0xf98            
            uint8_t _pad0f99[0x387];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_HelpingHands because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Familiar_HelpingHands) == 0x1320);
    };
};

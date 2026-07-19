#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0x1580
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_vecHelpers"
        // static metadata: MNetworkVarNames "GameTime_t m_tChoreUseCooldownEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_tSoonestHelperCooldownEndTime"
        // static metadata: MNetworkVarNames "char m_nAvailableHelperCount"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_HelpingHands : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_vecHelpers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecHelpers;
            char m_vecHelpers[0x18]; // 0x11d8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tChoreUseCooldownEndTime; // 0x11f0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tSoonestHelperCooldownEndTime; // 0x11f4            
            // metadata: MNetworkEnable
            char m_nAvailableHelperCount; // 0x11f8            
            uint8_t _pad11f9[0x387];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_HelpingHands because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Familiar_HelpingHands) == 0x1580);
    };
};

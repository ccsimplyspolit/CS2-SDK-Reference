#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_NPC_SimpleAnimatingAI;
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
        // Size: 0x1910
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle<C_NPC_SimpleAnimatingAI> m_vecDeployedSentries"
        #pragma pack(push, 1)
        class CCitadel_Ability_ShieldedSentry : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            std::int32_t k_nOldestSentriesToShowInUI; // 0x11d8            
            uint8_t _pad11dc[0x1c]; // 0x11dc
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "sentriesVecChanged"
            // m_vecDeployedSentries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_NPC_SimpleAnimatingAI>> m_vecDeployedSentries;
            char m_vecDeployedSentries[0x18]; // 0x11f8            
            uint8_t _pad1210[0x700];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ShieldedSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ShieldedSentry) == 0x1910);
    };
};

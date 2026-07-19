#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CNPC_SimpleAnimatingAI;
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
        // Size: 0x16b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle<CNPC_SimpleAnimatingAI> m_vecDeployedSentries"
        #pragma pack(push, 1)
        class CCitadel_Ability_ShieldedSentry : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x28]; // 0xf70
            // metadata: MNetworkEnable
            // m_vecDeployedSentries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CNPC_SimpleAnimatingAI>> m_vecDeployedSentries;
            char m_vecDeployedSentries[0x18]; // 0xf98            
            uint8_t _pad0fb0[0x700];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ShieldedSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ShieldedSentry) == 0x16b0);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CGameRulesProxy.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelGameRules;
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
        // Size: 0x4a8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelGameRules * m_pGameRules"
        #pragma pack(push, 1)
        class CCitadelGameRulesProxy : public source2sdk::server::CGameRulesProxy
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkTypeAlias "CCitadelGamerules*"
            // metadata: MNetworkPriority "32"
            source2sdk::server::CCitadelGameRules* m_pGameRules; // 0x4a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelGameRulesProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelGameRulesProxy) == 0x4a8);
    };
};

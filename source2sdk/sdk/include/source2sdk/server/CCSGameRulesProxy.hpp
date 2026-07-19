#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CGameRulesProxy.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSGameRules;
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
        // Size: 0x4b0
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CCSGameRulesProxy : public source2sdk::server::CGameRulesProxy
        {
        public:
            source2sdk::server::CCSGameRules* m_pGameRules; // 0x4a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSGameRulesProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSGameRulesProxy) == 0x4b0);
    };
};

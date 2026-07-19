#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_GameRulesProxy.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CSGameRules;
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
        // Size: 0x608
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_CSGameRulesProxy : public source2sdk::client::C_GameRulesProxy
        {
        public:
            source2sdk::client::C_CSGameRules* m_pGameRules; // 0x600            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGameRulesProxy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGameRulesProxy) == 0x608);
    };
};

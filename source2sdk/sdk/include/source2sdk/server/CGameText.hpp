#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/hudtextparms_t.hpp"
#include "source2sdk/server/CRulePointEntity.hpp"

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
        // Size: 0x7a0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CGameText : public source2sdk::server::CRulePointEntity
        {
        public:
            CUtlSymbolLarge m_iszMessage; // 0x780            
            source2sdk::client::hudtextparms_t m_textParms; // 0x788            
            uint8_t _pad079c[0x4];
            
            // Datamap fields:
            // void InputDisplay; // 0x0
            // CUtlSymbolLarge InputSetText; // 0x0
            // Color color; // 0x7fffffff
            // Color color2; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameText) == 0x7a0);
    };
};

#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_Navigator.hpp"

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
        // Size: 0x358
        // Has VTable
        #pragma pack(push, 1)
        class CAI_CitadelPlayerBotNavigator : public source2sdk::server::CAI_Navigator
        {
        public:
            bool m_bBlocked; // 0x350            
            uint8_t _pad0351[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_CitadelPlayerBotNavigator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_CitadelPlayerBotNavigator) == 0x358);
    };
};
